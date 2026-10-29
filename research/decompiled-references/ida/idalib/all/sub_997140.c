__int64 __fastcall sub_997140(__int64 a1, __int16 *a2, __int64 a3)
{
  __int16 v3; // ax
  __int16 v4; // ax
  __int16 *v5; // rbx
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  char v12; // al
  int v13; // edx
  _QWORD v15[13]; // [rsp+10h] [rbp-68h] BYREF

  *(_QWORD *)(a1 + 8) = 0xC00000000LL;
  v3 = *a2;
  *(_QWORD *)a1 = a1 + 16;
  v4 = v3 & 0x1FF;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  if ( ((v4 + 423) & 0x1FFu) <= 4 )
  {
    v12 = *((_BYTE *)a2 + 2);
    v13 = *((_DWORD *)a2 + 4);
    *(_QWORD *)(a1 + 112) = a2 + 16;
    result = v13 + (unsigned int)((v12 & 8) != 0) + 1;
    *(_QWORD *)(a1 + 120) = result;
  }
  else if ( v4 == 53 )
  {
    v10 = *((_QWORD *)a2 + 2);
    v11 = *((_QWORD *)a2 + 3) - v10;
    *(_QWORD *)(a1 + 112) = v10;
    result = (unsigned int)(v11 >> 3);
    *(_QWORD *)(a1 + 120) = (unsigned int)result;
  }
  else
  {
    if ( v4 == 130 )
    {
      v5 = a2 + 8;
      v6 = (__int64)&a2[4 * (*(_DWORD *)a2 >> 9) + 8];
      if ( (__int16 *)v6 != a2 + 8 )
      {
        do
        {
          while ( 1 )
          {
            if ( *(_WORD *)(*(_QWORD *)v5 + 36LL) == 44 )
            {
              v7 = *(_QWORD *)(*(_QWORD *)v5 + 40LL);
              if ( !(unsigned __int8)sub_C01160(v7, a3, 1) )
                break;
            }
            v5 += 4;
            if ( (__int16 *)v6 == v5 )
              goto LABEL_12;
          }
          v8 = *(unsigned int *)(a1 + 8);
          if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
          {
            sub_2237220(a1, a1 + 16, v8 + 1, 8);
            v8 = *(unsigned int *)(a1 + 8);
          }
          v5 += 4;
          *(_QWORD *)(*(_QWORD *)a1 + 8 * v8) = v7;
          ++*(_DWORD *)(a1 + 8);
        }
        while ( (__int16 *)v6 != v5 );
      }
LABEL_12:
      v15[1] = 0;
      v15[0] = a2 + 4;
      v15[3] = a2 + 8;
      v15[4] = 0;
    }
    else
    {
      sub_EE9E50(v15, a2);
    }
    sub_996EF0(a1, (__int64)v15);
    *(_QWORD *)(a1 + 112) = *(_QWORD *)a1;
    result = *(unsigned int *)(a1 + 8);
    *(_QWORD *)(a1 + 120) = result;
  }
  return result;
}
