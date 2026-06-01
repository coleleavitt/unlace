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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // r12
  __int64 *v26; // rbp
  __int64 v27; // rax
  __int64 *v28; // rax
  __int64 v29; // r8
  __int64 v30; // rdx
  int v31; // ecx
  int v32; // ecx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v39; // [rsp+10h] [rbp-68h] BYREF
  int v40; // [rsp+18h] [rbp-60h]
  int v41; // [rsp+1Ch] [rbp-5Ch]
  int v42; // [rsp+20h] [rbp-58h]
  __int64 v43; // [rsp+28h] [rbp-50h]
  unsigned __int64 v44; // [rsp+38h] [rbp-40h]

  v2 = a1[3];
  v44 = __readfsqword(0x28u);
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
              v16 = *(_QWORD *)(a2 + 24);
              if ( v16 )
                j__qfree(v16);
              *(_DWORD *)(a2 + 8) = 79;
              v43 = 0;
              *((_DWORD *)v11 + 7) = -1;
              v39 = -1;
              v42 = -1;
              v41 = v3;
              v40 = 75;
              v17 = j__qalloc_or_throw(72, 0, v13, v14);
              *(_QWORD *)v17 = -1;
              *(_QWORD *)(v17 + 8) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v17 + 16) = 0xFFFFFFFFLL;
              *(_OWORD *)(v17 + 24) = 0;
              *(_QWORD *)(v17 + 40) = 0;
              *(_QWORD *)(v17 + 48) = 0;
              *(_QWORD *)(v17 + 56) = 0;
              *(_QWORD *)(v17 + 64) = 0;
              v18 = a1[8];
              v19 = a1[9];
              v43 = v17;
              v20 = *(_QWORD *)(v18 + 216);
              sub_240A20(v17, v20, v18, 2, *(unsigned __int8 *)(v19 + 130), 0);
              v25 = sub_241330(v17, v20, v21, v22);
              v26 = v11;
              *(_QWORD *)(v17 + 64) = v25;
              v27 = v11[2];
              *v25 = v27;
              v39 = v27;
              while ( 1 )
              {
                v28 = sub_2413C0((__int64)v25, -1, v23, v24);
                v30 = v26[2];
                v26[2] = *v28;
                v31 = *((_DWORD *)v28 + 2);
                *v28 = v30;
                LODWORD(v30) = *((_DWORD *)v26 + 6);
                *((_DWORD *)v26 + 6) = v31;
                v32 = *((_DWORD *)v28 + 3);
                *((_DWORD *)v28 + 2) = v30;
                LODWORD(v30) = *((_DWORD *)v26 + 7);
                *((_DWORD *)v26 + 7) = v32;
                v24 = v28[3];
                *((_DWORD *)v28 + 3) = v30;
                v23 = v26[5];
                v26[5] = v24;
                v28[3] = v23;
                if ( v5 == v26 + 2 )
                  break;
                v26 = (__int64 *)*v26;
              }
              if ( (unsigned __int8)sub_241B40((__int64)v25, -1, v23, v24, v29) )
              {
                v33 = sub_2418B0(v43);
                *((_DWORD *)sub_2413C0((__int64)v25, v33, v34, v35) + 2) = 78;
              }
              v36 = v11[2];
              v11[2] = v39;
              v39 = v36;
              LODWORD(v36) = *((_DWORD *)v11 + 6);
              *((_DWORD *)v11 + 6) = v40;
              v40 = v36;
              LODWORD(v36) = *((_DWORD *)v11 + 7);
              *((_DWORD *)v11 + 7) = v41;
              v41 = v36;
              v37 = v11[5];
              v11[5] = v43;
              v43 = v37;
              sub_255050((__int64)&v39);
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
