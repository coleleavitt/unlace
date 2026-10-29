__int64 __fastcall sub_41120(
        __int64 a1,
        __int64 a2,
        char a3,
        const char *a4,
        __int64 a5,
        unsigned __int8 a6,
        double a7,
        double a8,
        char a9)
{
  __int64 v14; // rax
  unsigned __int8 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // ebx
  int segm_qty; // eax
  unsigned __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rsi
  char v30; // [rsp+4h] [rbp-10Ch]
  _OWORD v31[2]; // [rsp+8h] [rbp-108h] BYREF
  __int64 v32; // [rsp+28h] [rbp-E8h]
  __int64 v33; // [rsp+30h] [rbp-E0h]
  __int64 v34; // [rsp+38h] [rbp-D8h]
  __int128 v35; // [rsp+40h] [rbp-D0h]
  __int128 v36; // [rsp+50h] [rbp-C0h]
  __int128 v37; // [rsp+60h] [rbp-B0h]
  __int128 v38; // [rsp+70h] [rbp-A0h]
  __int128 v39; // [rsp+80h] [rbp-90h]
  __int128 v40; // [rsp+90h] [rbp-80h]
  __int128 v41; // [rsp+A0h] [rbp-70h]
  __int128 v42; // [rsp+B0h] [rbp-60h]
  unsigned __int64 v43; // [rsp+C0h] [rbp-50h]
  unsigned __int64 v44; // [rsp+D0h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  memset(v31, 0, sizeof(v31));
  v43 = 0xFFFFFFFF00000000LL;
  v32 = 0;
  v34 = 0;
  v33 = a6;
  v35 = -1;
  v36 = -1;
  v37 = -1;
  v38 = -1;
  v39 = -1;
  v40 = -1;
  v41 = -1;
  v42 = -1;
  BYTE1(v33) = 2;
  BYTE3(v33) = *(_BYTE *)(a2 + 618) + 1;
  if ( !a9 )
  {
    v26 = *(_QWORD *)(a1 + 328);
    v30 = a3;
    v27 = *(_QWORD *)(a1 + 176) + 1LL;
    *(_QWORD *)(a1 + 176) = v27;
    set_selector(v27, v26 >> 4);
    a3 = v30;
  }
  v14 = *(_QWORD *)(a1 + 176);
  v15 = a6 - 2;
  LOBYTE(v43) = a3;
  v34 = v14;
  if ( v15 > 8u )
  {
    v16 = 0;
    v17 = -1;
  }
  else
  {
    v16 = (int)(qword_785E0[v15] - 1);
    v17 = -LODWORD(qword_785E0[v15]);
  }
  v18 = *(_QWORD *)(a2 + 456);
  v19 = v18 & v17 & (*(_QWORD *)(a1 + 512) + v16);
  if ( !a5 )
    a5 = 1;
  *(_QWORD *)&v31[0] = v19;
  v20 = v19 + a5;
  v21 = 0x100000000LL;
  if ( *(_DWORD *)(a2 + 464) == 8 )
    v21 = -1;
  v22 = v20 & v18;
  if ( v20 != v21 )
    v21 = v22;
  *((_QWORD *)&v31[0] + 1) = v21;
  *(_QWORD *)(a1 + 512) = v21;
  v23 = (*(_WORD *)(a1 + 520) & 0x10) == 0 ? 5 : 21;
  segm_qty = get_segm_qty();
  if ( segm_qty > 63 )
  {
    if ( segm_qty == 64 )
      sub_EAA0((__int64)"Too many segments, future segment addition messages will not be displayed...\n");
    v23 |= 8u;
  }
  if ( !(unsigned __int8)add_segm_ex(v31, a4, 0, v23 | 0x20u) )
    sub_EB70((__int64)"Could not create segment '%s' at %a..%a", a4, NAN, a8);
  if ( a9 )
  {
    v28 = *(_QWORD *)(a1 + 176) + 1LL;
    v29 = *(_QWORD *)(a1 + 328) >> 4;
    *(_QWORD *)(a1 + 176) = v28;
    set_selector(v28, v29);
  }
  return getseg(*(_QWORD *)&v31[0]);
}

