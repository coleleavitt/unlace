unsigned __int64 __fastcall sub_2210410(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 (*v3)(void); // rax
  __int64 v4; // rbx
  int v5; // r15d
  unsigned int i; // r12d
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rdx
  unsigned __int8 v11; // al
  int v12; // eax
  int v13; // r13d
  unsigned int j; // r12d
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  __int64 v18; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 24);
  v3 = *(__int64 (**)(void))(*(_QWORD *)a1 + 16LL);
  if ( v2 )
  {
    if ( v2 == 1 )
      v4 = qword_2C8F5C8 + 6;
    else
      v4 = v2 + qword_2C8F5B8 + 5;
    v2 = v4 + 8;
    v5 = ((__int64 (__fastcall *)(__int64))v3)(a1);
    if ( v5 )
    {
      for ( i = 0; v5 != i; ++i )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, i);
        v9 = v8;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, i);
        v11 = *(_BYTE *)(a2 + 10);
        if ( (v11 & 0x18) != 0 )
        {
          if ( ((v11 >> 3) & 3) != 1 )
            goto LABEL_7;
        }
        else
        {
          v18 = v10;
          v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
          v10 = v18;
          if ( v12 != 1 )
          {
LABEL_7:
            v7 = 15;
            if ( v9 )
LABEL_22:
              v7 = v9 + 8;
LABEL_8:
            if ( v2 < v7 )
              v2 = v7;
            continue;
          }
        }
        if ( v9 )
          goto LABEL_22;
        if ( v10 )
        {
          v7 = 15;
          goto LABEL_8;
        }
      }
    }
  }
  else
  {
    v13 = v3();
    if ( v13 )
    {
      for ( j = 0; j != v13; ++j )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, j);
        v16 = v15 + 8;
        if ( v2 < v16 )
          v2 = v16;
      }
    }
  }
  return v2;
}
