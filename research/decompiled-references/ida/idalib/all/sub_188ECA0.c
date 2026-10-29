__int64 __fastcall sub_188ECA0(__int64 a1)
{
  void (*v2)(); // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // r14d
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rax
  unsigned int *v11; // rdi
  int v12; // r12d
  unsigned int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 (__fastcall *v23)(__int64); // rax
  char v24; // al
  unsigned int *v25; // r13
  __int64 (*v26)(void); // rax
  __int64 v27; // rax
  unsigned int v28; // esi
  __int64 v29; // rdi
  __int64 v30; // r10
  __int64 v31; // rdi
  void (*v32)(); // rax
  unsigned __int8 v33; // al
  char v36; // al
  char v37; // bl
  unsigned int *v38; // rbp
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned int *v42; // rax
  int v43; // r11d
  int v44; // ecx
  bool v45; // zf
  unsigned int v46; // [rsp+10h] [rbp-F8h]
  unsigned __int8 v47; // [rsp+16h] [rbp-F2h]
  bool v48; // [rsp+17h] [rbp-F1h]
  unsigned int *v49; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v50; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v51; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v52[25]; // [rsp+40h] [rbp-C8h] BYREF

  sub_18487B0(a1);
  if ( !*(_DWORD *)(a1 + 3296) )
    return 0;
  v6 = 0;
  v7 = 0;
  v47 = 0;
  do
  {
    v8 = 16 * v7;
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 3288) + v8);
    v10 = *(_QWORD *)(v9 + 128);
    if ( !v10 )
    {
      sub_7052B0((__int64 *)(*(_QWORD *)(v9 + 104) + 96LL), *(_QWORD *)(v9 + 104), (__int64)v2, v3, v4, v5);
      v10 = *(_QWORD *)(v9 + 128);
      if ( !v10 )
        goto LABEL_28;
    }
    v11 = *(unsigned int **)(v10 + 88);
    v49 = v11;
    if ( !v11 )
      goto LABEL_28;
    v12 = sub_B97260((__int64)v11);
    v13 = *(_DWORD *)(*(_QWORD *)(a1 + 3288) + v8 + 8);
    v18 = (_QWORD *)sub_EDC250(*(_QWORD *)(a1 + 248), (__int64)v49, v14, v15, v16, v17);
    if ( sub_B8D750((__int64)v49) )
      goto LABEL_32;
    if ( v18 )
    {
      v23 = *(__int64 (__fastcall **)(__int64))(*v18 + 72LL);
      if ( v23 == sub_9A8F10 )
      {
        v24 = sub_B7F5F0(v18, v52, v19, v20, v21, v22);
        v25 = v49;
        if ( v24 )
          goto LABEL_9;
      }
      else
      {
        v36 = v23((__int64)v18);
        v25 = v49;
        if ( v36 )
          goto LABEL_9;
      }
      sub_B77D20((__int64)v18);
      v25 = v49;
LABEL_38:
      sub_183E510(a1, v13, (__int64)v25);
      goto LABEL_28;
    }
    v25 = v49;
    v48 = v12 == 3;
    if ( !v49 )
      goto LABEL_48;
    v37 = 0;
    v46 = v13;
    v38 = v49;
    do
    {
      v39 = sub_B97260((__int64)v38);
      if ( v39 == 3 )
      {
        v48 = 1;
      }
      else if ( v39 == 4 )
      {
        v18 = nullptr;
        v13 = v46;
LABEL_32:
        v25 = v49;
        goto LABEL_9;
      }
      if ( (v38[24] & 3) != 0 )
      {
        if ( v37 )
          break;
        v37 = 1;
      }
      v42 = (unsigned int *)sub_7052B0((__int64 *)v38 + 12, (__int64)v38, v40, v41, v21, v22);
      v38 = v42;
    }
    while ( v25 != v42 && v42 );
    v18 = nullptr;
    v13 = v46;
    v25 = v49;
LABEL_48:
    if ( v48 )
      goto LABEL_38;
LABEL_9:
    sub_1845690(a1, v13, (__int64)v25, 0, v21, v22);
    v26 = *(__int64 (**)(void))(*(_QWORD *)v49 + 32LL);
    if ( (char *)v26 == (char *)sub_A01140 )
      v27 = sub_B70A60((__int64)v49);
    else
      v27 = v26();
    v28 = *(_DWORD *)(a1 + 3576);
    v50 = v27;
    if ( !v28 )
    {
      v52[0] = 0;
      goto LABEL_60;
    }
    v4 = v28 - 1;
    v29 = *(_QWORD *)(a1 + 3560);
    v3 = (unsigned int)v4 & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
    v2 = (void (*)())(v29 + 16 * v3);
    v30 = *(_QWORD *)v2;
    if ( v27 == *(_QWORD *)v2 )
      goto LABEL_13;
    v43 = 1;
    v5 = 0;
    if ( v30 == -4096 )
    {
LABEL_54:
      v44 = *(_DWORD *)(a1 + 3568);
      v52[0] = v2;
      v3 = (unsigned int)(v44 + 1);
      v4 = (unsigned int)(4 * v3);
      if ( (unsigned int)v4 < 3 * v28 )
      {
        v4 = v28 >> 3;
        if ( v28 - *(_DWORD *)(a1 + 3572) - (unsigned int)v3 > (unsigned int)v4 )
          goto LABEL_56;
        goto LABEL_61;
      }
LABEL_60:
      v28 *= 2;
LABEL_61:
      sub_18485A0((__int64 *)(a1 + 3560), v28, (__int64)v2, v3, v4, v5);
      sub_18401F0((__int64 *)(a1 + 3560), &v50, v52);
      v27 = v50;
      v2 = (void (*)())v52[0];
      v3 = (unsigned int)(*(_DWORD *)(a1 + 3568) + 1);
LABEL_56:
      v45 = *(_QWORD *)v2 == -4096;
      *(_DWORD *)(a1 + 3568) = v3;
      if ( !v45 )
        --*(_DWORD *)(a1 + 3572);
      *(_QWORD *)v2 = v27;
      *((_BYTE *)v2 + 8) = 0;
    }
    else
    {
      while ( 1 )
      {
        if ( !v5 && v30 == -8192 )
          v5 = (__int64)v2;
        v3 = (unsigned int)v4 & (v43 + (_DWORD)v3);
        v2 = (void (*)())(v29 + 16LL * (unsigned int)v3);
        v30 = *(_QWORD *)v2;
        if ( v27 == *(_QWORD *)v2 )
          break;
        if ( v30 == -4096 )
        {
          if ( v5 )
            v2 = (void (*)())v5;
          goto LABEL_54;
        }
        ++v43;
      }
LABEL_13:
      if ( *((_BYTE *)v2 + 8) )
      {
        if ( !sub_B8D800((__int64)v49) )
        {
          v31 = *(_QWORD *)(a1 + 256);
          v2 = nullsub_157;
          v32 = *(void (**)())(*(_QWORD *)v31 + 128LL);
          if ( v32 != nullsub_157 )
            ((void (__fastcall *)(__int64, unsigned int *))v32)(v31, v49);
        }
      }
    }
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 340LL) <= 9u )
    {
      v33 = sub_B81B70((__int64)v49);
      if ( !v33 )
        goto LABEL_71;
      if ( v33 <= 3u )
        goto LABEL_27;
      if ( v33 > 6u )
LABEL_71:
        BUG();
      if ( v12 != 1 && v12 != 4 )
      {
        v51 = 0;
        if ( !v18 || (unsigned __int8)sub_B7F5F0(v18, &v51, (__int64)v2, v3, v4, v5) && (*(_BYTE *)(v51 + 82) & 1) != 0 )
        {
          sub_168B9F0((__int64)v52, (__int64 *)(a1 + 8), v49[6], 0x1D90u, 0);
          sub_185AB80((__int64)v52, (__int64 *)&v49);
          sub_15F7200(v52);
        }
      }
    }
LABEL_27:
    v47 = 1;
LABEL_28:
    v7 = (unsigned int)(v6 + 1);
    v6 = v7;
  }
  while ( (_DWORD)v7 != *(_DWORD *)(a1 + 3296) );
  *(_DWORD *)(a1 + 3296) = 0;
  return v47;
}
