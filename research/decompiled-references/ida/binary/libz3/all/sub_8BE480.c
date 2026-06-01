__int64 __fastcall sub_8BE480(__int64 a1, unsigned int a2)
{
  int *v2; // r13
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 i; // r13
  void *v6; // rdi
  void *v7; // rbx
  _QWORD v8[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v9[2]; // [rsp+20h] [rbp-48h] BYREF
  int v10; // [rsp+30h] [rbp-38h]

  v2 = (int *)(*(_QWORD *)(a1 + 24) + 40LL * a2);
  if ( *v2 || (result = (unsigned int)v2[8], (_DWORD)result) )
  {
    v8[0] = 0;
    v8[1] = 0;
    v9[0] = 1;
    v9[1] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v8, v2);
    v4 = *(_QWORD *)(a1 + 24);
    v10 = v2[8];
    if ( v4 )
    {
      for ( i = v4 + 40LL * *(unsigned int *)(v4 - 4); i != v4; v4 += 40 )
      {
        while ( 1 )
        {
          v6 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v4 + 20) & 1) == 0
            && *(_DWORD *)(v4 + 16) == 1
            && (v9[0] & 0x100000000LL) == 0
            && LODWORD(v9[0]) == 1 )
          {
            break;
          }
          sub_1852000(qword_1C7F2C0, v4, v8);
          *(_DWORD *)(v4 + 32) -= v10;
          v4 += 40;
          if ( i == v4 )
            goto LABEL_12;
        }
        sub_1832A70(qword_1C7F2C0, v4, v8);
        sub_182CBA0(v6, v4 + 16);
        *(_BYTE *)(v4 + 20) &= ~1u;
        *(_DWORD *)(v4 + 16) = 1;
        *(_DWORD *)(v4 + 32) -= v10;
      }
    }
LABEL_12:
    v7 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v8);
    return sub_182CBA0(v7, v9);
  }
  return result;
}

