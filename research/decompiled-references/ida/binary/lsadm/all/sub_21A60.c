void __fastcall sub_21A60(unsigned int *a1, _QWORD *a2)
{
  __int64 v3; // xmm0_8
  __int64 v4; // rbp
  __int64 v5; // rax
  _QWORD *v6; // r12
  __int64 v7; // r13
  size_t v8; // rbp
  _QWORD *v9; // r14
  __int64 v10; // rax
  __int64 *v11; // r12
  __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // r15
  __int64 v17; // rbp
  unsigned __int64 v18; // r9
  size_t v19; // r10
  char v20; // bp
  _QWORD *v21; // r12
  __int64 v22; // rax
  __int64 *v23; // r13
  __int64 v24; // rbp
  __int64 v25; // rsi
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // r15
  _QWORD *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  const void *v34; // r11
  void *v35; // rdi
  __int64 v36; // rax
  void *v37; // rax
  __int64 v38; // [rsp+0h] [rbp-58h]
  __int64 v39; // [rsp+0h] [rbp-58h]
  unsigned __int64 v40; // [rsp+8h] [rbp-50h]
  unsigned __int64 v41; // [rsp+8h] [rbp-50h]
  size_t v42; // [rsp+10h] [rbp-48h]
  const void *v43; // [rsp+18h] [rbp-40h]

  sub_218D0((__int64)a1, (__int64)a2);
  switch ( *(_DWORD *)a2 )
  {
    case 1:
      v4 = a2[1];
      if ( *a1 )
        sub_218D0((__int64)a1, (__int64)a2);
      *a1 = 1;
      *((_QWORD *)a1 + 1) = v4;
      break;
    case 2:
      v5 = operator new(0x18u);
      v6 = (_QWORD *)v5;
      if ( *(_DWORD *)a2 != 2 )
      {
        if ( !byte_7BCA0 )
          sub_2A3D0(1623, a2);
        BUG();
      }
      v7 = a2[1];
      *(_QWORD *)v5 = 0;
      *(_OWORD *)(v5 + 8) = 0;
      v8 = *(_QWORD *)(v7 + 8);
      if ( v8 )
      {
        v37 = (void *)sub_29E10(*(_QWORD *)(v7 + 8));
        *v6 = v37;
        v6[2] = v8;
        a2 = *(_QWORD **)v7;
        memcpy(v37, *(const void **)v7, v8);
        v6[1] = v8;
      }
      if ( *a1 )
        sub_218D0((__int64)a1, (__int64)a2);
      *a1 = 2;
      *((_QWORD *)a1 + 1) = v6;
      break;
    case 3:
      v9 = (_QWORD *)a2[1];
      v10 = sub_29E10(24);
      *(_QWORD *)v10 = 0;
      v11 = (__int64 *)v10;
      *(_OWORD *)(v10 + 8) = 0;
      v38 = v9[1];
      if ( v38 )
      {
        v12 = 0;
        v13 = 0;
        v14 = 0;
        v15 = 0;
        while ( 1 )
        {
          v16 = *v9 + 40 * v15;
          if ( v13 < v14 + 1 )
          {
            v31 = sub_29E60(v11, v12, v14 + 1, 40);
            *v11 = v31;
            v12 = v31;
            v14 = v11[1];
          }
          v17 = v12 + 40 * v14;
          *(_QWORD *)v17 = 0;
          *(_DWORD *)(v17 + 24) = 0;
          *(_QWORD *)(v17 + 32) = 0;
          *(_OWORD *)(v17 + 8) = 0;
          ++v11[1];
          if ( v16 != v17 )
          {
            v18 = *(_QWORD *)(v16 + 8);
            if ( v18 && (v19 = v18 - 1, v18 != 1) )
            {
              v34 = *(const void **)v16;
              v35 = *(void **)v17;
              if ( *(_QWORD *)(v17 + 16) < v18 )
              {
                v43 = *(const void **)v16;
                v42 = v18 - 1;
                v41 = *(_QWORD *)(v16 + 8);
                v36 = sub_29E60(v17, *(_QWORD *)v17, v41, 1);
                v34 = v43;
                v19 = v42;
                *(_QWORD *)v17 = v36;
                v18 = v41;
                v35 = (void *)v36;
              }
              *(_QWORD *)(v17 + 8) = v18;
              v40 = v18;
              memmove(v35, v34, v19);
              *(_BYTE *)(*(_QWORD *)v17 + v40 - 1) = 0;
            }
            else
            {
              *(_QWORD *)(v17 + 8) = 0;
            }
          }
          a2 = (_QWORD *)(v16 + 24);
          ++v15;
          sub_21A60(v17 + 24, v16 + 24);
          if ( v15 == v38 )
            break;
          v14 = v11[1];
          v13 = v11[2];
          v12 = *v11;
        }
      }
      if ( *a1 )
        sub_218D0((__int64)a1, (__int64)a2);
      *a1 = 3;
      *((_QWORD *)a1 + 1) = v11;
      break;
    case 4:
      v21 = (_QWORD *)a2[1];
      v22 = operator new(0x18u);
      *(_QWORD *)v22 = 0;
      v23 = (__int64 *)v22;
      *(_OWORD *)(v22 + 8) = 0;
      v24 = v21[1];
      if ( v24 )
      {
        v25 = 0;
        v26 = 0;
        v27 = 0;
        v28 = 0;
        while ( 1 )
        {
          v29 = *v21 + 16 * v28;
          if ( v26 < v27 + 1 )
          {
            v32 = sub_29E60(v23, v25, v27 + 1, 16);
            *v23 = v32;
            v25 = v32;
            v27 = v23[1];
          }
          ++v28;
          v30 = (_QWORD *)(v25 + 16 * v27);
          *v30 = 0;
          v30[1] = 0;
          ++v23[1];
          sub_21A60(v30, v29);
          if ( v28 == v24 )
            break;
          v27 = v23[1];
          v26 = v23[2];
          v25 = *v23;
        }
      }
      v33 = *a1;
      if ( (_DWORD)v33 )
        sub_218D0((__int64)a1, v33);
      *a1 = 4;
      *((_QWORD *)a1 + 1) = v23;
      break;
    case 5:
      v20 = *((_BYTE *)a2 + 8);
      if ( *a1 )
        sub_218D0((__int64)a1, (__int64)a2);
      *a1 = 5;
      *((_BYTE *)a1 + 8) = v20;
      break;
    case 6:
      if ( *a1 )
        sub_218D0((__int64)a1, (__int64)a2);
      *a1 = 6;
      break;
    case 7:
      v3 = a2[1];
      if ( *a1 )
      {
        v39 = a2[1];
        sub_218D0((__int64)a1, (__int64)a2);
        v3 = v39;
      }
      *a1 = 7;
      *((_QWORD *)a1 + 1) = v3;
      break;
    default:
      return;
  }
}

