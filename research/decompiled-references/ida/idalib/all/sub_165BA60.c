__int64 __fastcall sub_165BA60(__int64 a1, __int64 *a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // r15
  __int64 v12; // r13
  bool v13; // r12
  __int64 v14; // rax
  char v15; // dl
  char v16; // r12
  __int64 v18; // rdi
  __int64 v19; // r15
  __int64 v20; // rdx
  unsigned __int8 v21; // al
  __int64 v22; // r9
  __int64 v23; // rax
  _QWORD *v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r13
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r13
  void *v38; // rax
  _QWORD *v39; // rax
  char v40; // [rsp+0h] [rbp-128h]
  __int64 v41; // [rsp+0h] [rbp-128h]
  _QWORD *v42; // [rsp+0h] [rbp-128h]
  _QWORD *v43; // [rsp+0h] [rbp-128h]
  __int64 v44; // [rsp+8h] [rbp-120h]
  __int64 v45; // [rsp+18h] [rbp-110h] BYREF
  void *v46; // [rsp+20h] [rbp-108h] BYREF
  signed __int64 v47; // [rsp+28h] [rbp-100h]
  __int64 v48; // [rsp+30h] [rbp-F8h] BYREF
  void *v49; // [rsp+40h] [rbp-E8h] BYREF
  signed __int64 v50; // [rsp+48h] [rbp-E0h]
  __int64 v51; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v52[16]; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD *v53; // [rsp+70h] [rbp-B8h]
  unsigned __int8 *v54[11]; // [rsp+80h] [rbp-A8h] BYREF
  char v55; // [rsp+D8h] [rbp-50h]
  unsigned int v56; // [rsp+E0h] [rbp-48h]
  char v57; // [rsp+E4h] [rbp-44h]

  v7 = sub_1657130(a1, (__int64)a2, a4);
  v10 = v7;
  switch ( v7 )
  {
    case 1u:
      if ( (**(_BYTE **)(a1 + 232) & 0x20) == 0 )
        goto LABEL_36;
      v18 = *(_QWORD *)(a4 + 8);
      if ( (*(_BYTE *)(v18 + 28) & 0x7Fu) - 53 > 1 )
        goto LABEL_36;
      v19 = sub_B9A040(v18);
      if ( (*(_BYTE *)(v19 + 28) & 0x7F) != 0x51 )
        goto LABEL_36;
      v20 = *(_QWORD *)(a4 + 8);
      v21 = *(_BYTE *)(v20 + 28) & 0x7F;
      if ( ((v21 + 52) & 0x7Fu) <= 1 || (v22 = *(_QWORD *)(a4 + 8), (unsigned int)v21 - 53 <= 1) )
      {
        v41 = *(_QWORD *)(a4 + 8);
        v23 = sub_B72ED0(v41);
        v20 = v41;
        v22 = v23;
      }
      if ( ((*(_BYTE *)(v20 + 29) >> 5) & 3) == 2 && ((*(_BYTE *)(v22 + 29) >> 5) & 3u) <= 1 )
      {
        v42 = (_QWORD *)v22;
        sub_168B9F0(v52, a1 + 8, a3, 5623, 0);
        sub_B76FC0((__int64)&v49, (_QWORD *)v19);
        v24 = v42;
        if ( v55 )
        {
          sub_AEC220(v54, v49, v50);
          v24 = v42;
        }
        else if ( v57 )
        {
          v32 = sub_168B9E0(v52);
          v36 = (__int64)v42;
          v37 = v32;
          v38 = v53;
          if ( v53 )
          {
            v38 = (void *)(*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, __int64, _QWORD *))(*v53 + 32LL))(
                            v53,
                            v19,
                            *v53,
                            v34,
                            v35,
                            v42);
            v36 = (__int64)v42;
          }
          v43 = (_QWORD *)v36;
          v46 = v38;
          v39 = sub_1587BC0(v37, (__int64 *)&v46, v33, v34, v35, v36);
          sub_AEC220((unsigned __int8 **)(*v39 + 32LL * v56 + 8), v49, v50);
          v24 = v43;
        }
        sub_B76FC0((__int64)&v46, v24);
        if ( v55 )
        {
          sub_AEC220(v54, v46, v47);
        }
        else if ( v57 )
        {
          v29 = sub_168B9E0(v52);
          v30 = (__int64)v53;
          if ( v53 )
            v30 = (*(__int64 (__fastcall **)(_QWORD *))(*v53 + 32LL))(v53);
          v45 = v30;
          v31 = sub_1587BC0(v29, &v45, v25, v26, v27, v28);
          sub_AEC220((unsigned __int8 **)(*v31 + 32LL * v56 + 8), v46, v47);
        }
        if ( v46 != &v48 )
          operator delete(v46);
        if ( v49 != &v51 )
          operator delete(v49);
        v10 = 0;
        sub_15F7200(v52);
      }
      else
      {
LABEL_36:
        if ( *(_DWORD *)(a4 + 48) )
          sub_1658BD0(a1, a3, (__int64)a2, a4);
      }
      return v10;
    case 0u:
      return v10;
    case 2u:
      v11 = *(_QWORD *)(a4 + 24);
      v12 = *(_QWORD *)(a4 + 16);
      v44 = *(_QWORD *)(a4 + 8);
      v13 = (*(_BYTE *)a4 & 4) != 0;
      v40 = *(_BYTE *)a4 & 3;
      v14 = sub_B91AB0(*(_QWORD **)(a1 + 248), *a2, a4 + 32, v8, v9, v44);
      v15 = 4 * v13;
      v16 = *(_BYTE *)(v14 + 36);
      *(_DWORD *)(v14 + 32) = a3;
      *(_QWORD *)(v14 + 40) = v44;
      *(_QWORD *)(v14 + 48) = v12;
      *(_QWORD *)(v14 + 56) = v11;
      *(_BYTE *)(v14 + 36) = v40 | v15 | v16 & 0xF8;
      return v10;
  }
  return sub_165BD80();
}
