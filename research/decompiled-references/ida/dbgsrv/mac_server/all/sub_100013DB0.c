/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100013DB0
// Address: 0x0000000100013DB0

//----- (0000000100013DB0) ----------------------------------------------------
__int64 __fastcall sub_100013DB0(__int64 a1, off_t a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r12d
  off_t v8; // rax
  size_t v9; // rax
  off_t v10; // rax
  size_t v11; // rax
  __int64 v12; // rcx
  off_t v13; // rax
  size_t v14; // rax
  off_t v15; // rax
  size_t v16; // rax
  _BYTE v19[4]; // [rsp+8h] [rbp-108h] BYREF
  unsigned int v20; // [rsp+Ch] [rbp-104h]
  unsigned int v21; // [rsp+10h] [rbp-100h]
  unsigned int v22; // [rsp+14h] [rbp-FCh]
  __int64 v23; // [rsp+18h] [rbp-F8h]
  __int128 v24; // [rsp+20h] [rbp-F0h]
  __int128 v25; // [rsp+30h] [rbp-E0h] BYREF
  off_t v26; // [rsp+40h] [rbp-D0h]
  __int64 v27; // [rsp+48h] [rbp-C8h]
  int v28; // [rsp+50h] [rbp-C0h]
  void *v29[4]; // [rsp+58h] [rbp-B8h] BYREF
  __int128 v30; // [rsp+78h] [rbp-98h] BYREF
  __int128 v31; // [rsp+88h] [rbp-88h] BYREF
  __int128 v32; // [rsp+98h] [rbp-78h]
  _OWORD v33[2]; // [rsp+A8h] [rbp-68h] BYREF
  __int128 v34; // [rsp+C8h] [rbp-48h]
  int v35; // [rsp+DCh] [rbp-34h] BYREF

  if ( a2 == 0 || a3 == 0 )
    return 0;
  v35 = 0;
  v5 = 0;
  if ( qlseek(*(_QWORD *)(a1 + 8), a2, 0) != a2 )
    return v5;
  if ( qlread(*(_QWORD *)(a1 + 8), &v35, 4) == 4 && qlseek(*(_QWORD *)(a1 + 8), a2, 0) == a2 )
  {
    memset(v29, 0, 28);
    v30 = 0;
    v31 = 0;
    v32 = 0;
    memset(v33, 0, 28);
    v34 = 0;
    *(_QWORD *)&v25 = a4;
    *((_QWORD *)&v25 + 1) = a4 + a5;
    v28 = v35;
    v26 = a2;
    v27 = a3;
    switch ( v35 )
    {
      case 1:
        if ( qlread(*(_QWORD *)(a1 + 8), v19, 24) == 24 )
        {
          sub_1000142F0((__int64)v29, v21);
          v13 = qlseek(*(_QWORD *)(a1 + 8), a2 + v20, 0);
          if ( v13 == a2 + v20 )
          {
            sub_100014390(*(_QWORD *)(a1 + 8), v21, 2u, "Slide info TOC entries count", -1, -1);
            v14 = qlread(*(_QWORD *)(a1 + 8), v29[0], 2LL * v21);
            if ( v14 == 2LL * v21 )
            {
              LODWORD(v29[3]) = HIDWORD(v23);
              sub_100010830((__int64)&v30, (unsigned int)(v23 * HIDWORD(v23)));
              v15 = qlseek(*(_QWORD *)(a1 + 8), a2 + v22, 0);
              if ( v15 == a2 + v22 )
              {
                v16 = qlread(*(_QWORD *)(a1 + 8), (void *)v30, *((signed __int64 *)&v30 + 1));
                if ( v16 == *((_QWORD *)&v30 + 1) )
                  goto LABEL_17;
              }
            }
          }
        }
        goto LABEL_23;
      case 2:
      case 4:
        if ( qlread(*(_QWORD *)(a1 + 8), v19, 40) != 40 )
          goto LABEL_23;
        if ( !v20 )
          goto LABEL_23;
        DWORD2(v33[1]) = v20;
        v34 = v24;
        sub_1000142F0((__int64)&v31 + 8, v22);
        v8 = qlseek(*(_QWORD *)(a1 + 8), a2 + v21, 0);
        if ( v8 != a2 + v21 )
          goto LABEL_23;
        sub_100014390(*(_QWORD *)(a1 + 8), v22, 2u, "Slide info page starts count", -1, -1);
        v9 = qlread(*(_QWORD *)(a1 + 8), *((void **)&v31 + 1), 2LL * v22);
        if ( v9 != 2LL * v22 )
          goto LABEL_23;
        sub_1000142F0((__int64)v33, HIDWORD(v23));
        v10 = qlseek(*(_QWORD *)(a1 + 8), a2 + (unsigned int)v23, 0);
        if ( v10 != a2 + (unsigned int)v23 )
          goto LABEL_23;
        sub_100014390(*(_QWORD *)(a1 + 8), HIDWORD(v23), 2u, "Slide info page extras count", -1, -1);
        v11 = qlread(*(_QWORD *)(a1 + 8), *(void **)&v33[0], 2LL * HIDWORD(v23));
        v12 = HIDWORD(v23);
        break;
      case 3:
      case 5:
        if ( qlread(*(_QWORD *)(a1 + 8), v19, 24) != 24 || !v20 )
          goto LABEL_23;
        DWORD2(v33[1]) = v20;
        *(_QWORD *)&v34 = 0x3FF8000000000000LL;
        *((_QWORD *)&v34 + 1) = v23;
        sub_1000142F0((__int64)&v31 + 8, v21);
        sub_100014390(*(_QWORD *)(a1 + 8), v21, 2u, "Slide info page starts count", -1, -1);
        v11 = qlread(*(_QWORD *)(a1 + 8), *((void **)&v31 + 1), 2LL * v21);
        v12 = v21;
        break;
      default:
        goto LABEL_17;
    }
    if ( v11 == 2 * v12 )
    {
LABEL_17:
      LOBYTE(v5) = 1;
      sub_100014470((char **)(a1 + 648), &v25);
    }
    else
    {
LABEL_23:
      v5 = 0;
    }
    if ( *(_QWORD *)&v33[0] )
    {
      *((_QWORD *)&v33[0] + 1) = 0;
      qfree(*(void **)&v33[0]);
      *(_QWORD *)&v33[0] = 0;
      *(_QWORD *)&v33[1] = 0;
    }
    if ( *((_QWORD *)&v31 + 1) )
    {
      *(_QWORD *)&v32 = 0;
      qfree(*((void **)&v31 + 1));
      *((_QWORD *)&v31 + 1) = 0;
      *((_QWORD *)&v32 + 1) = 0;
    }
    if ( (_QWORD)v30 )
    {
      *((_QWORD *)&v30 + 1) = 0;
      qfree((void *)v30);
      *(_QWORD *)&v30 = 0;
      *(_QWORD *)&v31 = 0;
    }
    if ( v29[0] )
    {
      v29[1] = nullptr;
      qfree(v29[0]);
    }
  }
  else
  {
    return 0;
  }
  return v5;
}
