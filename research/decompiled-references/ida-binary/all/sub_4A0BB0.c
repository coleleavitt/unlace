__int64 __fastcall sub_4A0BB0(_QWORD *a1, unsigned __int64 a2, char a3, bool *a4)
{
  void (*v8)(void); // rax
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rcx

  v8 = *(void (**)(void))(*a1 + 672LL);
  if ( v8 != nullsub_263 )
    v8();
  v9 = sub_4A0B00(a1, a2);
  v10 = v9;
  if ( v9 < 0 )
  {
    v12 = a1[292];
    if ( v12 )
    {
      v13 = 0;
      v14 = -1;
      while ( 1 )
      {
        v16 = *(_QWORD *)(a1[291] + 8 * v13);
        if ( a2 < v16 )
        {
          if ( a3 )
            break;
        }
        if ( a3 != 1 && v16 < a2 )
        {
          v15 = a2 - v16;
LABEL_10:
          if ( v15 < v14 )
          {
            v10 = v13;
            v14 = v15;
          }
        }
        if ( v12 == ++v13 )
          goto LABEL_4;
      }
      v15 = v16 - a2;
      goto LABEL_10;
    }
  }
LABEL_4:
  if ( a4 )
    *a4 = v9 >= 0;
  return v10;
}
