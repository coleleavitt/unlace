void __fastcall sub_B12E70(__int64 *a1, __int64 a2, char a3)
{
  unsigned int v4; // ebp
  char i; // al
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rax
  unsigned int v9; // ebp
  __int64 v10; // r15
  char v11; // dl
  __int64 v12; // rdx
  _DWORD *v13; // rdx
  void *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // [rsp+0h] [rbp-5Ch]
  void *v18[2]; // [rsp+4h] [rbp-58h] BYREF
  void *v19[9]; // [rsp+14h] [rbp-48h] BYREF

  if ( !a3 )
  {
    v4 = 0;
    v18[0] = nullptr;
    v18[1] = nullptr;
    v19[0] = &dword_0 + 1;
    v19[1] = nullptr;
    sub_182CBA0(qword_1C7F2C0, v19);
    BYTE4(v19[0]) &= ~1u;
    LODWORD(v19[0]) = (_DWORD)&dword_0 + 1;
    v17 = 0;
    for ( i = sub_3ED700((__int64)qword_1C7F2C0, (__int64)v18, a2);
          i;
          i = sub_3ED700((__int64)qword_1C7F2C0, (__int64)v18, a2) )
    {
      v6 = *a1;
      if ( !*a1 || v4 >= *(_DWORD *)(v6 - 4) )
        break;
      v7 = 40LL * v4;
      if ( sub_3ED700((__int64)qword_1C7F2C0, v6 + v7 + 8, a2) )
      {
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v18, v7 + *a1 + 8, (__int64)v18);
        ++v17;
      }
      ++v4;
    }
    if ( v17 && sub_3ED700((__int64)qword_1C7F2C0, (__int64)v18, a2) )
    {
      v8 = *a1;
      v9 = 0;
      if ( *a1 )
      {
        while ( v9 < *(_DWORD *)(v8 - 4) )
        {
          while ( 1 )
          {
            v10 = 40LL * v9;
            v11 = sub_3ED700((__int64)qword_1C7F2C0, v8 + v10 + 8, a2);
            v8 = *a1;
            if ( v11 )
              break;
            if ( v8 )
            {
              if ( ++v9 < *(_DWORD *)(v8 - 4) )
                continue;
            }
            goto LABEL_16;
          }
          v12 = 0x27FFFFFFD8LL;
          if ( v8 )
            v12 = 40LL * (unsigned int)(*(_DWORD *)(v8 - 4) - 1);
          v13 = (_DWORD *)(v8 + v12);
          v14 = qword_1C7F2C0;
          *(_DWORD *)(v8 + 40LL * v9) = *v13;
          sub_27B950((__int64)v14, v8 + v10 + 8, v13 + 2);
          v15 = 0x27FFFFFFD8LL;
          v16 = *a1;
          if ( *a1 )
            v15 = 40LL * (unsigned int)(*(_DWORD *)(v16 - 4) - 1);
          sub_25A130((char *)(v16 + v15 + 8));
          v8 = *a1;
          --*(_DWORD *)(*a1 - 4);
        }
      }
LABEL_16:
      sub_B12420(a1, a2);
      sub_B067F0(a1, a2, 0);
    }
    sub_25A130((char *)v18);
  }
}

