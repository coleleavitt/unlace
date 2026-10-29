void __fastcall sub_113F480(__int64 *a1, __int64 a2, _BYTE **a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  void **v10; // rdx
  void *v11; // rbx
  void **v12; // r15
  __int64 v13; // rsi
  char v14; // al
  void **v15; // rbp
  _QWORD *v16; // rax
  __int64 v17; // r12
  __int64 v18; // rbx
  void *v19; // rdi
  void **v20; // rdi
  void **v21; // rdi
  void **v22; // rbx
  void **v23; // r12
  _BYTE *v24; // rcx
  void **v25; // r15
  _BYTE *v26; // rax
  void *v27; // r14
  void **v28; // rbx
  __int64 v29; // rsi
  void **v30; // [rsp+0h] [rbp-C8h]
  void **v31; // [rsp+10h] [rbp-B8h] BYREF
  void *v32; // [rsp+18h] [rbp-B0h]
  void *v33[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+30h] [rbp-98h] BYREF
  void *v35[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v36; // [rsp+50h] [rbp-78h]
  int v37; // [rsp+58h] [rbp-70h]
  void *v38; // [rsp+60h] [rbp-68h]
  __int64 v39; // [rsp+70h] [rbp-58h] BYREF
  __int16 v40; // [rsp+80h] [rbp-48h]

  if ( *((_DWORD *)a3 + 11) == 39 )
  {
    sub_22BA610(a3, 49);
  }
  else
  {
    v5 = sub_113EC30(a1, a3, a2);
    switch ( *((_DWORD *)a3 + 12) )
    {
      case 5:
      case 7:
        sub_22BA610(a3, 2 * (unsigned int)(v5 == 3) + 5);
        break;
      case 6:
      case 8:
        sub_22BA610(a3, 2 * (unsigned int)(v5 == 3) + 6);
        break;
      case 0xF:
      case 0x10:
        sub_22BA610(a3, (unsigned int)(v5 == 3) + 15);
        break;
      case 0x15:
      case 0x16:
        sub_22BA610(a3, (unsigned int)(v5 == 3) + 21);
        break;
      case 0x31:
        return;
      default:
        v7 = sub_113EB00(a3);
        if ( v7 && (v7 == 3) != (v5 == 3) )
        {
          v35[0] = (void *)0x96200000B3ALL;
          LODWORD(v35[1]) = 2371;
          v8 = sub_21B6DA0(a2, v35, 3);
          v9 = *(_QWORD *)(a2 + 8);
          v36 = 0x96200000B3ALL;
          v37 = 2371;
          v10 = (void **)(v9 + 8LL * (unsigned int)v8);
          v31 = (void **)(v9 + 8 * HIDWORD(v8));
          v30 = v31;
          for ( *(__m128 *)v35 = _mm_loadh_ps((const double *)&v31); v30 != v10; v35[0] = v10 )
          {
            v11 = *v10;
            v12 = v35;
            if ( *v10 )
            {
              do
              {
                v13 = *((unsigned int *)v12 + 4);
                if ( !(_DWORD)v13 )
                  break;
                v31 = v10;
                v14 = sub_21B9810(v11, v13);
                v10 = v31;
                if ( v14 )
                {
                  v36 = 0x96200000B3ALL;
                  v31 = v30;
                  v37 = 2371;
                  *(__m128 *)v35 = _mm_loadh_ps((const double *)&v31);
                  if ( v30 == v10 )
                    goto LABEL_19;
                  v31 = (void **)((char *)&v35[1] + 4);
LABEL_45:
                  v24 = *v10;
                  v25 = v10 + 1;
                  v26 = *((_BYTE **)*v10 + 2);
                  v32 = *v10;
                  if ( !v26 )
                    v26 = v24;
                  v26[44] |= 1u;
                  for ( v35[0] = v10 + 1; v30 != v25; v35[0] = v25 )
                  {
                    v27 = *v25;
                    v28 = v35;
                    if ( *v25 )
                    {
                      do
                      {
                        v29 = *((unsigned int *)v28 + 4);
                        if ( !(_DWORD)v29 )
                          break;
                        if ( (unsigned __int8)sub_21B9810(v27, v29) )
                        {
                          v10 = (void **)v35[0];
                          if ( v30 != v35[0] )
                            goto LABEL_45;
                          goto LABEL_20;
                        }
                        v28 = (void **)((char *)v28 + 4);
                      }
                      while ( v31 != v28 );
                    }
                    ++v25;
                  }
                  goto LABEL_20;
                }
                v12 = (void **)((char *)v12 + 4);
              }
              while ( v12 != (void **)((char *)&v35[1] + 4) );
            }
            ++v10;
          }
LABEL_19:
          v32 = nullptr;
LABEL_20:
          sub_FC70B0((__int64)v35, *a1, 0, 495);
          sub_21B5FF0(v33, v32, a2);
          sub_AEC220((unsigned __int8 **)v35, (_BYTE *)v33[0], (signed __int64)v33[1]);
          sub_AEC220((unsigned __int8 **)v35, *a3, (signed __int64)a3[1]);
          if ( v33[0] != &v34 )
            operator delete(v33[0]);
          if ( (_BYTE)v40 )
          {
            sub_FC7790(v36, (__int64 *)v35, SHIBYTE(v40));
            v36 = 0;
            v40 = 0;
          }
          if ( v38 != &v39 )
            operator delete(v38);
          v15 = (void **)v35[0];
          if ( v35[0] )
          {
            v16 = v35[1];
            if ( v35[1] )
            {
              if ( v35[0] < v35[1] || v35[0] > (char *)v35[1] + 14848 )
              {
                v17 = *((_QWORD *)v35[0] + 66);
                v18 = v17 + ((unsigned __int64)*((unsigned int *)v35[0] + 134) << 6);
                while ( v17 != v18 )
                {
                  while ( 1 )
                  {
                    v18 -= 64;
                    v19 = *(void **)(v18 + 24);
                    if ( v19 == (void *)(v18 + 40) )
                      break;
                    operator delete(v19);
                    if ( v17 == v18 )
                      goto LABEL_33;
                  }
                }
LABEL_33:
                v20 = (void **)v15[66];
                if ( v20 != v15 + 68 )
                  free(v20);
                v21 = (void **)v15[52];
                if ( v21 != v15 + 54 )
                  free(v21);
                v22 = v15 + 48;
                v23 = v15 + 8;
                do
                {
                  while ( *v22 != v22 + 2 )
                  {
                    operator delete(*v22);
                    v22 -= 4;
                    if ( v23 == v22 )
                      goto LABEL_40;
                  }
                  v22 -= 4;
                }
                while ( v23 != v22 );
LABEL_40:
                operator delete(v15, 0x3A0u);
              }
              else
              {
                v6 = *((unsigned int *)v35[1] + 3744);
                *((_DWORD *)v35[1] + 3744) = v6 + 1;
                v16[v6 + 1856] = v15;
              }
            }
          }
        }
        break;
    }
  }
}
