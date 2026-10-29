/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qhost2addr
// Address: 0x00000000000BE514

//----- (00000000000BE514) ----------------------------------------------------
__int64 __fastcall qhost2addr_(__int64 a1, const char *a2, unsigned __int16 a3, unsigned __int16 a4)
{
  unsigned __int16 v5; // w9
  pthread_mutex_t *v8; // x22
  int v9; // w0
  unsigned int v10; // w21
  struct addrinfo *v11; // x0
  int v12; // w8
  __int128 *v13; // x8
  __int128 v14; // q1
  __int64 v15; // x8
  struct addrinfo *pai; // [xsp+8h] [xbp-78h] BYREF
  struct addrinfo req; // [xsp+10h] [xbp-70h] BYREF
  pthread_mutex_t v19; // [xsp+40h] [xbp-40h] BYREF

  *(&v19.__align + 1) = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a3 == 10 )
    v5 = 0;
  else
    v5 = a3;
  memset(&req.ai_socktype, 0, 40);
  req.ai_flags = 2;
  req.ai_family = v5;
  if ( a4 )
  {
    v8 = &v19;
    qsnprintf(&v19, 8, "%u", a4);
  }
  else
  {
    v8 = nullptr;
  }
  pai = nullptr;
  v9 = getaddrinfo(a2, (const char *)v8, &req, &pai);
  v10 = 0;
  if ( !v9 )
  {
    v11 = pai;
    if ( pai )
    {
      if ( a3 == 10 )
      {
        v12 = *(_DWORD *)&byte_4[(_QWORD)pai];
        if ( v12 == 2 )
        {
          v15 = *(__int64 *)((char *)&qword_20 + (_QWORD)pai);
          *(_WORD *)(a1 + 18) = -1;
          *(_DWORD *)(a1 + 20) = *(_DWORD *)(v15 + 4);
        }
        else
        {
          if ( v12 != 10 )
          {
            v10 = 0;
            goto LABEL_16;
          }
          v13 = *(__int128 **)((char *)&qword_20 + (_QWORD)pai);
          v14 = *v13;
          *(_OWORD *)(a1 + 12) = *(__int128 *)((char *)v13 + 12);
          *(_OWORD *)a1 = v14;
        }
      }
      else
      {
        *(_OWORD *)a1 = *(_OWORD *)*(__int64 *)((char *)&qword_20 + (_QWORD)pai);
      }
      v10 = 1;
LABEL_16:
      freeaddrinfo(v11);
    }
  }
  return v10;
}
// 20: using guessed type __int64 qword_20;
