unsigned __int64 __fastcall sub_1F1DB20(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  unsigned __int64 v4; // rax
  unsigned __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rbp
  __int64 *v10; // r14
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // r12d
  unsigned __int64 v19; // rax
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rdi
  bool v24; // zf
  int v25; // ecx
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // r9
  _QWORD *v30; // rbp
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // [rsp+0h] [rbp-78h]
  unsigned __int64 v39; // [rsp+0h] [rbp-78h]
  unsigned __int64 v40; // [rsp+0h] [rbp-78h]
  unsigned __int64 v41; // [rsp+0h] [rbp-78h]
  int v42; // [rsp+Ch] [rbp-6Ch]
  int v43; // [rsp+10h] [rbp-68h]
  _BYTE v44[9]; // [rsp+17h] [rbp-61h] BYREF
  __int64 v45; // [rsp+20h] [rbp-58h]
  __int64 *v46; // [rsp+28h] [rbp-50h]
  __int64 v47; // [rsp+30h] [rbp-48h]
  unsigned __int64 v48; // [rsp+38h] [rbp-40h]

  v2 = *(unsigned int *)(a1 + 24);
  v45 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL);
  *(_DWORD *)(a1 + 24) = v2 + 1;
  v46 = (__int64 *)(v45 + 2352);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2);
  v4 = sub_1EC2080((__int64 *)(v45 + 2352), 8LL * (unsigned int)v3, 3u);
  v48 = v4;
  if ( (_DWORD)v3 )
  {
    v5 = (unsigned __int64 *)v4;
    v47 = v4 + 8LL * (unsigned int)(v3 - 1) + 8;
    do
    {
      v7 = *(unsigned int *)(a1 + 24);
      while ( 1 )
      {
        *(_DWORD *)(a1 + 24) = v7 + 1;
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v7);
        if ( (_DWORD)v8 == 1 )
        {
          v13 = 0;
          memset(v44, 0, sizeof(v44));
          v10 = sub_1F19370(a1);
        }
        else
        {
          if ( (int)v8 <= 1 )
          {
            if ( !(_DWORD)v8 )
            {
              v44[8] = 0;
              v10 = sub_1F19370(a1);
              v27 = *(unsigned int *)(a1 + 24);
              *(_DWORD *)(a1 + 24) = v27 + 1;
              *(_QWORD *)v44 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v27) != 0;
              v13 = 0;
              goto LABEL_10;
            }
            goto LABEL_20;
          }
          if ( (_DWORD)v8 != 2 )
          {
            if ( (_DWORD)v8 == 3 )
            {
              v9 = *(_QWORD *)(a1 + 8);
              v10 = nullptr;
              v11 = sub_1EE13A0(v9, *(_QWORD *)(a1 + 16), (__int64 *)(a1 + 32), (_DWORD *)(a1 + 24));
              v12 = (_QWORD *)v9;
              v13 = 0;
              v44[0] = 0;
              *(_QWORD *)&v44[1] = sub_1EDB980(v12, v11, v14, v15, v16, v17);
              goto LABEL_10;
            }
LABEL_20:
            v13 = 0;
            v10 = nullptr;
            memset(v44, 0, sizeof(v44));
            goto LABEL_10;
          }
          v30 = *(_QWORD **)(a1 + 8);
          v10 = nullptr;
          v31 = sub_1EE13A0((__int64)v30, *(_QWORD *)(a1 + 16), (__int64 *)(a1 + 32), (_DWORD *)(a1 + 24));
          memset(v44, 0, sizeof(v44));
          v13 = sub_1EDB980(v30, v31, v32, v33, v34, v35);
        }
LABEL_10:
        v43 = sub_1EE7490(a1);
        v38 = sub_1F6A0A0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
        v42 = sub_1EE7490(a1);
        v18 = sub_1EE7490(a1);
        if ( (_DWORD)v8 )
        {
          if ( (_DWORD)v8 == 1 )
          {
            v36 = sub_1EC2080(v46, 32, 3u);
            v37 = v38;
            v41 = v36;
            sub_B98AA0(v36, v45, (__int64)v10, v42, v37, v18);
            v21 = v41;
          }
          else
          {
            v19 = sub_1EC2080(v46, 32, 3u);
            v20 = v38;
            v39 = v19;
            if ( v13 )
              sub_B98A40(v19, v45, v13, v43, v42, v20, v18);
            else
              sub_B98A70(v19, v45, *(__int64 *)&v44[1], v43, v42, v20, v18);
            v21 = v39;
          }
        }
        else
        {
          v28 = sub_1EC2080(v46, 32, 3u);
          v29 = v38;
          v40 = v28;
          sub_B98A00(v28, v45, (__int64)v10, v44[0], v42, v29, v18, v43);
          v21 = v40;
        }
        v22 = *(_QWORD *)(a1 + 32);
        v23 = *(unsigned int *)(a1 + 24);
        v7 = (unsigned int)(v23 + 1);
        v24 = *(_QWORD *)(v22 + 8 * v23) == 0;
        v25 = *(_DWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 24) = v7;
        if ( !v24 )
          break;
        *v5++ = v21;
        if ( (unsigned __int64 *)v47 == v5 )
          return v48;
      }
      v6 = *(_QWORD *)(v22 + 8 * v7);
      ++v5;
      *(_DWORD *)(a1 + 24) = v25 + 2;
      *(_BYTE *)(v21 + 28) |= 4u;
      *(_WORD *)(v21 + 28) = (8 * v6) | *(_WORD *)(v21 + 28) & 7;
      *(v5 - 1) = v21;
    }
    while ( v5 != (unsigned __int64 *)v47 );
  }
  return v48;
}
