__int64 __fastcall sub_28B740(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdi
  int v3; // r12d
  __int64 *v5; // r13
  int v6; // eax
  __int64 *v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 **v10; // rax
  __int64 *v11; // rbx
  _QWORD *i; // r15
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rax
  _QWORD *v18; // r12
  __int64 *v19; // rbp
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v32; // [rsp+10h] [rbp-68h] BYREF
  int v33; // [rsp+18h] [rbp-60h]
  int v34; // [rsp+1Ch] [rbp-5Ch]
  int v35; // [rsp+20h] [rbp-58h]
  __int64 v36; // [rsp+28h] [rbp-50h]
  unsigned __int64 v37; // [rsp+38h] [rbp-40h]

  v2 = a1[3];
  v37 = __readfsqword(0x28u);
  v3 = **(_DWORD **)(a2 + 24);
  if ( (int)v2 - 1 > 0 )
  {
    v5 = (__int64 *)a2;
    v6 = *(_DWORD *)(a2 + 8);
    v7 = (__int64 *)(a1[2] + 8LL * (unsigned int)(v2 - 1));
    v8 = (__int64)&v7[-(unsigned int)(v2 - 2) - 1];
    while ( 1 )
    {
      v9 = *v7;
      if ( (unsigned int)(v6 - 74) <= 2 )
        break;
      while ( 1 )
      {
        v6 = *(_DWORD *)(v9 + 8);
        if ( v6 != 71 )
          break;
        v10 = *(__int64 ***)(v9 + 24);
        v11 = *v10;
        if ( v3 == *((_DWORD *)*v10 + 7) )
        {
LABEL_13:
          for ( i = v11;
                !(unsigned __int8)sub_285490((__int64)(i + 2), 0) && !(unsigned __int8)sub_285570((__int64)(i + 2), 0);
                i = (_QWORD *)*i )
          {
            if ( v5 == i + 2 )
            {
              v14 = *(_QWORD *)(a2 + 24);
              if ( v14 )
                j__qfree(v14);
              *(_DWORD *)(a2 + 8) = 79;
              v36 = 0;
              *((_DWORD *)v11 + 7) = -1;
              v32 = -1;
              v35 = -1;
              v34 = v3;
              v33 = 75;
              v15 = j__qalloc_or_throw(72);
              *(_QWORD *)v15 = -1;
              *(_QWORD *)(v15 + 8) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v15 + 16) = 0xFFFFFFFFLL;
              *(_OWORD *)(v15 + 24) = 0;
              *(_QWORD *)(v15 + 40) = 0;
              *(_QWORD *)(v15 + 48) = 0;
              *(_QWORD *)(v15 + 56) = 0;
              *(_QWORD *)(v15 + 64) = 0;
              v16 = a1[8];
              v17 = a1[9];
              v36 = v15;
              sub_240A20(v15, *(_QWORD *)(v16 + 216), v16, 2, *(unsigned __int8 *)(v17 + 130), 0);
              v18 = sub_241330();
              v19 = v11;
              *(_QWORD *)(v15 + 64) = v18;
              v20 = v11[2];
              *v18 = v20;
              v32 = v20;
              while ( 1 )
              {
                v21 = sub_2413C0((__int64)v18, -1);
                v23 = v19[2];
                v19[2] = *v21;
                v24 = *((_DWORD *)v21 + 2);
                *v21 = v23;
                LODWORD(v23) = *((_DWORD *)v19 + 6);
                *((_DWORD *)v19 + 6) = v24;
                v25 = *((_DWORD *)v21 + 3);
                *((_DWORD *)v21 + 2) = v23;
                LODWORD(v23) = *((_DWORD *)v19 + 7);
                *((_DWORD *)v19 + 7) = v25;
                v26 = v21[3];
                *((_DWORD *)v21 + 3) = v23;
                v27 = v19[5];
                v19[5] = v26;
                v21[3] = v27;
                if ( v5 == v19 + 2 )
                  break;
                v19 = (__int64 *)*v19;
              }
              if ( (unsigned __int8)sub_241B40((__int64)v18, -1, v27, v26, v22) )
              {
                v28 = sub_2418B0(v36);
                *((_DWORD *)sub_2413C0((__int64)v18, v28) + 2) = 78;
              }
              v29 = v11[2];
              v11[2] = v32;
              v32 = v29;
              LODWORD(v29) = *((_DWORD *)v11 + 6);
              *((_DWORD *)v11 + 6) = v33;
              v33 = v29;
              LODWORD(v29) = *((_DWORD *)v11 + 7);
              *((_DWORD *)v11 + 7) = v34;
              v34 = v29;
              v30 = v11[5];
              v11[5] = v36;
              v36 = v30;
              sub_255050((__int64)&v32);
              return 1;
            }
          }
          return 0;
        }
        while ( v5 != v11 + 2 )
        {
          v11 = (__int64 *)*v11;
          if ( *((_DWORD *)v11 + 7) == v3 )
            goto LABEL_13;
        }
        if ( --v7 == (__int64 *)v8 )
          return 0;
        v5 = (__int64 *)v9;
        v9 = *v7;
      }
      if ( --v7 == (__int64 *)v8 )
        return 0;
      v5 = (__int64 *)v9;
    }
  }
  return 0;
}
