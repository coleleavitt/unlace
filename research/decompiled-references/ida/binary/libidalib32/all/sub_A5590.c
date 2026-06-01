__int64 __fastcall sub_A5590(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  __int64 v7; // rbx
  _OWORD *v8; // r15
  __int64 v9; // rax
  char v10; // bp
  const void *errdesc; // rax
  const void *v13; // rax
  __int64 v14; // rax
  int v15; // [rsp+24h] [rbp-104h] BYREF
  __int64 v16; // [rsp+28h] [rbp-100h]
  _OWORD v17[11]; // [rsp+30h] [rbp-F8h] BYREF
  unsigned __int64 v18; // [rsp+E8h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( a4 )
  {
    v7 = fopenM();
    if ( v7 )
      goto LABEL_3;
  }
  else
  {
    v7 = fopenWB();
    if ( v7 )
    {
LABEL_3:
      qfwrite();
      qfwrite();
      v16 = *(unsigned int *)(a1 + 16);
      qfwrite();
      memset(&v17[3], 0, 0x80u);
      v8 = v17;
      qstrncpy();
      qfwrite();
      if ( getinf_buf() != 16 )
        v17[0] = 0;
      v9 = qfwrite();
      LOBYTE(v8) = v9 == 16;
      v10 = (v9 == 16) & (a4 ^ 1);
      if ( v10 )
      {
        memset(&v17[1], 0, 32);
        qstrncpy();
        if ( qfwrite() == 32 )
        {
          v14 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 368LL);
          if ( !v14 && dbg )
          {
            sub_A1BF0();
            v14 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 368LL);
          }
          v15 = v14;
          qfwrite();
          if ( v15 == qfwrite() )
          {
            qftell();
            v15 = 0;
            qfwrite();
            LODWORD(v8) = sub_A54B0(a1, v7, (__int64)&v15);
            if ( (_BYTE)v8 )
            {
              if ( !(unsigned int)qfseek() && qfwrite() )
                goto LABEL_10;
            }
          }
        }
        LODWORD(v8) = 0;
      }
      else
      {
        v10 = v9 != 16;
      }
      if ( a5 && v10 )
      {
        LODWORD(v8) = 0;
        errdesc = (const void *)get_errdesc();
        sub_9C320(a5, errdesc);
      }
LABEL_10:
      qfclose();
      return (unsigned int)v8;
    }
  }
  if ( a5 )
  {
    v13 = (const void *)get_errdesc();
    sub_9C320(a5, v13);
  }
  LODWORD(v8) = 0;
  return (unsigned int)v8;
}

