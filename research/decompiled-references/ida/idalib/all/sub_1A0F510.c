void __fastcall sub_1A0F510(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  _DWORD *v4; // r13
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 *v11; // rbx
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  char *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r14
  __int64 v32; // rdx
  __int64 v33; // rax
  char v34; // r13
  __int64 v35; // rax
  unsigned __int64 v36; // r13
  __int64 v37; // rdx
  unsigned __int64 v38; // r12
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // [rsp+8h] [rbp-D0h] BYREF
  unsigned __int64 v49; // [rsp+10h] [rbp-C8h] BYREF
  unsigned __int64 v50; // [rsp+18h] [rbp-C0h] BYREF
  _BYTE v51[184]; // [rsp+20h] [rbp-B8h] BYREF

  v4 = (_DWORD *)a2;
  v48 = *(_QWORD *)(a2 + 16);
  v6 = sub_C1BEF0((__int64)&v48, a2, a3, a4);
  v10 = *(_QWORD *)(a3 + 8);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34 )
  {
    a2 = a3;
    sub_19DD0E0(*(__int64 **)(a1 + 736), a3);
    if ( *v4 == 3 )
    {
      a2 = v48;
      sub_19D7290(*(__int64 **)(a1 + 736), v48);
    }
    v10 = *(_QWORD *)(a3 + 8);
  }
  v11 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  v12 = sub_F68450(*(_QWORD *)(v11[1] & 0xFFFFFFFFFFFFFFF0LL), a2, v7, v8, v9);
  v16 = sub_F68450(
          *(_QWORD *)(*(_QWORD *)&byte_8[v48 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL),
          a2,
          v13,
          v14,
          v15);
  v21 = sub_F67D30(*v11, a2, v17, v18, v19, v20);
  v26 = (char *)sub_F67D30(*(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL), a2, v22, v23, v24, v25);
  v31 = (__int64)v26;
  if ( v21 )
  {
    if ( v26 )
    {
      if ( (v21[9] & 0x7F) == 0x3B && (v26[72] & 0x7F) == 0x3B && *((char *)v21 + 28) >= 0 && v26[28] >= 0 && !v21[16] )
      {
        sub_7052B0((__int64 *)(v21[13] + 96LL), v21[13], v27, v28, v29, v30);
        if ( !v21[16] )
        {
          v32 = 0;
          v33 = *(_QWORD *)&byte_8[v16 & 0xFFFFFFFFFFFFFFF0LL];
          if ( (v33 & 8) != 0 )
            v32 = *(__int64 *)((char *)&qword_18 + (v33 & 0xFFFFFFFFFFFFFFF0LL));
          v34 = v33 | v16;
          v35 = *(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL];
          v36 = v32 | v34 & 7;
          v37 = 0;
          if ( (v35 & 8) != 0 )
            v37 = *(__int64 *)((char *)&qword_18 + (v35 & 0xFFFFFFFFFFFFFFF0LL));
          v38 = v37 | ((unsigned __int8)v35 | (unsigned __int8)v12) & 7;
          if ( ((unsigned int)v38 >> 9 == (unsigned int)v36 >> 9
             || sub_F56A30((unsigned int)v36 >> 9, (unsigned int)v38 >> 9, *(_QWORD *)(a1 + 248)))
            && (((v36 >> 4) & 3) == ((v38 >> 4) & 3) || (v36 & 0x30) == 0 || (v38 & 0x30) == 0)
            && HIDWORD(v38) == HIDWORD(v36)
            && ((v36 >> 6) & 7) == ((v38 >> 6) & 7)
            && ((unsigned __int8)v38 & (unsigned __int8)~(_BYTE)v36 & 7) == 0
            && ((v38 & 8) == 0 || (v36 & 8) != 0) )
          {
            sub_168B9F0((__int64)v51, (__int64 *)(a1 + 8), *((_DWORD *)v21 + 6), 0x176Au, 0);
            v49 = sub_A7AC20(*(_QWORD *)(a1 + 248), (__int64)v21, v39, v40, v41, v42);
            v43 = sub_162B6D0((__int64)v51, (__int64 *)&v49);
            v50 = sub_A7AC20(*(_QWORD *)(a1 + 248), v31, v44, v45, v46, v47);
            sub_162B6D0(v43, (__int64 *)&v50);
            sub_15F7200(v51);
          }
        }
      }
    }
  }
}
