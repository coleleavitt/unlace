__int64 __fastcall sub_17B8230(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // r11
  __int64 v16; // rbp
  __int64 v17; // rdi
  unsigned __int64 v18; // r11
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rax
  __int64 v32; // rsi
  __int64 v33; // r15
  unsigned __int64 v35; // rax
  int v36; // r9d
  unsigned __int64 v37; // [rsp+10h] [rbp-AE8h]
  __int64 (__fastcall **v39)(); // [rsp+20h] [rbp-AD8h] BYREF
  int v40; // [rsp+28h] [rbp-AD0h]
  void *ptr[2]; // [rsp+30h] [rbp-AC8h] BYREF
  _QWORD v42[2]; // [rsp+40h] [rbp-AB8h] BYREF
  _QWORD v43[2]; // [rsp+50h] [rbp-AA8h] BYREF
  __int128 v44; // [rsp+60h] [rbp-A98h]
  __int64 v45; // [rsp+70h] [rbp-A88h]
  __int64 v46; // [rsp+78h] [rbp-A80h]
  __int64 v47; // [rsp+80h] [rbp-A78h]
  int v48; // [rsp+88h] [rbp-A70h]
  __int64 v49; // [rsp+90h] [rbp-A68h]
  __int64 v50; // [rsp+A0h] [rbp-A58h]
  __int64 v51; // [rsp+A8h] [rbp-A50h]
  int v52; // [rsp+B0h] [rbp-A48h]
  __int64 v53; // [rsp+B8h] [rbp-A40h]
  __int64 v54; // [rsp+C0h] [rbp-A38h]
  int v55; // [rsp+C8h] [rbp-A30h]
  __int64 *v56; // [rsp+D0h] [rbp-A28h]
  __int64 v57; // [rsp+D8h] [rbp-A20h]
  __int64 v58; // [rsp+E0h] [rbp-A18h] BYREF
  __int16 v59; // [rsp+320h] [rbp-7D8h]
  __int64 v60; // [rsp+328h] [rbp-7D0h]
  _QWORD *v61; // [rsp+330h] [rbp-7C8h]
  __int64 v62; // [rsp+338h] [rbp-7C0h]
  _QWORD v63[5]; // [rsp+340h] [rbp-7B8h] BYREF
  _QWORD v64[242]; // [rsp+368h] [rbp-790h] BYREF

  if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
  {
    qword_2CD8AE0[0] = 0;
    qword_2CD8AE0[1] = &qword_2CD8AE0[3];
    qword_2CD8AE0[2] = 0x200000000LL;
    __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
    __cxa_guard_release(&qword_2CD8AC8);
  }
  v7 = *(_QWORD *)(a3 + 160);
  v44 = 0;
  v51 = v7;
  v56 = &v58;
  v57 = 0x400000000LL;
  LODWORD(v7) = *(_DWORD *)a3;
  v64[2] = qword_2CD8AE0;
  v43[0] = a3;
  v43[1] = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v8 = *(_QWORD *)(a3 + 72);
  LOBYTE(v59) = ((((unsigned int)v7 >> 12) & 0x7F) == 69) | v59 & 0xFE;
  v61 = v63;
  v63[2] = v8;
  v59 &= 0xFC01u;
  v62 = 0x200000000LL;
  v63[3] = v64;
  v63[4] = 0x200000000LL;
  v49 = 0;
  v50 = 0;
  v52 = 5;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v60 = 0;
  memset(&v64[3], 0, 40);
  v64[232] = 0;
  v9 = sub_1E85170(a1, v43);
  v14 = *(_QWORD *)(a1 + 544);
  v15 = *(_QWORD *)(a4 + 48);
  v16 = v9;
  v17 = *(_QWORD *)(a1 + 248);
  if ( v14 )
    v14 -= 64;
  if ( v15 )
  {
    v18 = v15 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v35 = sub_A7AA70(v17, a4, v10, v11, v12, v13);
    v17 = *(_QWORD *)(a1 + 248);
    v18 = v35;
  }
  v19 = v14 + 64;
  if ( !v14 )
    v19 = 0;
  v37 = v18;
  v20 = sub_B7BC50(v17, v19, *(_DWORD *)(a3 + 160), *(_DWORD *)(a3 + 160), 0, v18, v16, 0, 0, 0);
  *(_BYTE *)(v20 + 29) |= 2u;
  v21 = v20;
  v22 = v20;
  sub_B94AD0(*(__m128i **)(a1 + 544), v20, v23, v24, v25, v26);
  v42[0] = v22;
  ptr[0] = v42;
  ptr[1] = (void *)0x200000001LL;
  v31 = sub_B7E870(a4, v21, v27, v28, v29, v30);
  v32 = *(unsigned int *)(v22 + 24);
  v33 = (__int64)v31;
  v40 = 3813;
  v39 = off_2BC6A30;
  if ( (unsigned __int8)sub_1E63C20(a1, v32, v37, 0, &v39) )
    goto LABEL_9;
  switch ( *(_BYTE *)a3 & 7 )
  {
    case 0:
    case 1:
    case 7:
      v36 = 0;
      break;
    case 2:
      v36 = ((*(_BYTE *)a3 >> 5) ^ 1) & 1;
      break;
    case 3:
      v36 = 2;
      break;
    case 4:
      v36 = 4;
      break;
    case 5:
      v36 = 5;
      break;
    case 6:
      v36 = 3;
      break;
  }
  if ( (unsigned __int8)sub_17B7E30(a1, a2, *(_QWORD *)(a1 + 544), v33, 3, v36, (__int64)ptr) )
  {
LABEL_9:
    sub_B88650(v22, 1);
    sub_B88650(v14, 1);
  }
  if ( ptr[0] != v42 )
    free(ptr[0]);
  sub_147A7A0((char *)v43);
  return v22;
}
