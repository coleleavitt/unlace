_BOOL8 __fastcall sub_9AA040(__int64 a1, unsigned int a2, __int64 a3)
{
  void *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 i; // r15
  unsigned int v10; // edx
  bool v11; // bl
  unsigned int v12; // eax
  __int64 v13; // rdx
  void *v15; // rbx
  bool v16; // [rsp+8h] [rbp-70h]
  void *v17; // [rsp+8h] [rbp-70h]
  void *v18; // [rsp+8h] [rbp-70h]
  __int64 v19; // [rsp+10h] [rbp-68h]
  void *v20; // [rsp+18h] [rbp-60h]
  int v21[4]; // [rsp+20h] [rbp-58h] BYREF
  int v22; // [rsp+30h] [rbp-48h] BYREF
  char v23; // [rsp+34h] [rbp-44h]

  v5 = qword_1C7F2C0;
  sub_182CEF0(qword_1C7F2C0, a3);
  v19 = a3 + 16;
  sub_182CBA0(v5, a3 + 16);
  v6 = *(_QWORD *)(a1 + 592);
  *(_BYTE *)(a3 + 20) &= ~1u;
  v7 = *(_QWORD *)(a1 + 568);
  *(_DWORD *)(a3 + 16) = 1;
  v8 = *(_QWORD *)(v7 + 24LL * (*(_DWORD *)(v6 + 4LL * a2) & 0xFFFFFFF));
  if ( v8 )
  {
    v16 = 0;
    for ( i = v8 + 40LL * *(unsigned int *)(v8 - 4); i != v8; v16 = v11 )
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)(v8 + 32);
        v11 = v10 != -1 && a2 != v10;
        if ( v11 )
          break;
LABEL_4:
        v8 += 40;
        if ( i == v8 )
          goto LABEL_12;
      }
      v12 = *(_DWORD *)(*(_QWORD *)(a1 + 856) + 4LL * v10);
      v13 = 32LL * v10;
      if ( *(_DWORD *)(a1 + 848) >= v12 )
      {
        sub_3EBE30((__int64)v21, v8, *(_QWORD *)(a1 + 600) + v13);
        if ( v21[0] )
        {
          if ( *(_DWORD *)a3 )
          {
            if ( (*(_BYTE *)(a3 + 20) & 1) != 0 || *(_DWORD *)(a3 + 16) != 1 || (v23 & 1) != 0 || v22 != 1 )
            {
              sub_1851D20(qword_1C7F2C0, a3, v21, a3);
            }
            else
            {
              v20 = qword_1C7F2C0;
              sub_1831A80(qword_1C7F2C0, a3, v21, a3);
              sub_182CBA0(v20, v19);
              *(_BYTE *)(a3 + 20) &= ~1u;
              *(_DWORD *)(a3 + 16) = 1;
            }
          }
          else
          {
            sub_27B950((__int64)qword_1C7F2C0, a3, v21);
          }
        }
        else
        {
          sub_27B950((__int64)qword_1C7F2C0, a3, (int *)a3);
        }
        v15 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v21);
        sub_182CBA0(v15, &v22);
        goto LABEL_4;
      }
      sub_3EBE30((__int64)v21, v8, *(_QWORD *)(a1 + 608) + v13);
      if ( v21[0] )
      {
        if ( *(_DWORD *)a3 )
        {
          if ( (*(_BYTE *)(a3 + 20) & 1) != 0 || *(_DWORD *)(a3 + 16) != 1 || (v23 & 1) != 0 || v22 != 1 )
          {
            sub_1851D20(qword_1C7F2C0, a3, v21, a3);
          }
          else
          {
            v18 = qword_1C7F2C0;
            sub_1831A80(qword_1C7F2C0, a3, v21, a3);
            sub_182CBA0(v18, v19);
            *(_BYTE *)(a3 + 20) &= ~1u;
            *(_DWORD *)(a3 + 16) = 1;
          }
        }
        else
        {
          sub_27B950((__int64)qword_1C7F2C0, a3, v21);
        }
      }
      else
      {
        sub_27B950((__int64)qword_1C7F2C0, a3, (int *)a3);
      }
      v8 += 40;
      v17 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v21);
      sub_182CBA0(v17, &v22);
    }
  }
  else
  {
    v16 = 0;
  }
LABEL_12:
  sub_1831620(qword_1C7F2C0, a3);
  return v16;
}

