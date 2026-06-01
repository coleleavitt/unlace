__int64 __fastcall sub_91A760(__int64 a1, int a2, int a3)
{
  __int64 v4; // r11
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r11
  __int64 v9; // rbx
  char v10; // al
  __int64 v11; // r11
  __int64 v12; // r11
  __int64 v13; // rbx
  __int16 v14; // ax
  __int64 v15; // r11
  __int64 v16; // r11
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // r11
  __int64 v20; // r11
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r11
  __int64 v24; // r11
  __int64 v25; // rbx
  __int64 v26; // r11
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // r11
  __int64 v30; // r11
  __int64 v31; // rbp
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // r11
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // r11
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // r11
  __int64 v41; // rbx
  __int64 v42; // rax
  __m128i v43; // [rsp+0h] [rbp-68h] BYREF
  int v44; // [rsp+10h] [rbp-58h]
  __int64 v45; // [rsp+38h] [rbp-30h]
  int v46; // [rsp+40h] [rbp-28h]

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v9 = *((_QWORD *)sub_8CFFE0((__int64 *)(a1 + 768), a3) + 1);
        v10 = sub_915550(*(_QWORD *)(v8 + 568));
        goto LABEL_36;
      }
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v9 = *((_QWORD *)sub_8CFFE0((__int64 *)(a1 + 768), a3) + 1);
        v10 = sub_915900(*(_QWORD *)(v11 + 568));
        goto LABEL_36;
      }
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v13 = *((_QWORD *)sub_8CFFE0((__int64 *)(a1 + 768), a3) + 1);
        v14 = sub_915930(*(_QWORD *)(v12 + 568));
        goto LABEL_15;
      }
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v13 = *((_QWORD *)sub_8CFFE0((__int64 *)(a1 + 768), a3) + 1);
        v14 = sub_915CE0(*(_QWORD *)(v15 + 568));
LABEL_15:
        *(_WORD *)(v13 + *(unsigned int *)(*(_QWORD *)(v13 + 32) + 16LL) + 40) = v14;
        *(_BYTE *)(v13 + 44) |= 2u;
      }
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v17 = *((_QWORD *)sub_8CFFE0((__int64 *)(a1 + 768), a3) + 1);
        v18 = sub_915D10(*(_QWORD *)(v16 + 568));
        goto LABEL_20;
      }
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v17 = *((_QWORD *)sub_8CFFE0((__int64 *)(a1 + 768), a3) + 1);
        v18 = sub_9160C0(*(_QWORD *)(v19 + 568));
LABEL_20:
        *(_DWORD *)(v17 + *(unsigned int *)(*(_QWORD *)(v17 + 32) + 16LL) + 40) = v18;
        *(_BYTE *)(v17 + 44) |= 2u;
      }
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v21 = *((_QWORD *)sub_8CFFE0((__int64 *)(a1 + 768), a3) + 1);
        v22 = sub_9160F0(*(_QWORD *)(v20 + 568));
        goto LABEL_25;
      }
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v21 = *((_QWORD *)sub_8CFFE0((__int64 *)(a1 + 768), a3) + 1);
        v22 = sub_9164A0(*(_QWORD *)(v23 + 568));
LABEL_25:
        *(_QWORD *)(v21 + *(unsigned int *)(*(_QWORD *)(v21 + 32) + 16LL) + 40) = v22;
        *(_BYTE *)(v21 + 44) |= 2u;
      }
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v25 = *((_QWORD *)sub_8CFFE0((__int64 *)(a1 + 768), a3) + 1);
        sub_919FD0((__int64)&v43, *(_QWORD *)(v24 + 568));
        goto LABEL_30;
      }
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v25 = *((_QWORD *)sub_8CFFE0((__int64 *)(a1 + 768), a3) + 1);
        sub_91A020((__int64)&v43, *(_QWORD *)(v26 + 568));
LABEL_30:
        v27 = *(unsigned int *)(*(_QWORD *)(v25 + 32) + 16LL);
        v28 = v25 + v27 + 40;
        if ( *(_DWORD *)(v25 + v27 + 48) > 0x40u && *(_QWORD *)v28 )
          operator delete[](*(void **)v28);
        *(_QWORD *)v28 = v43.m128i_i64[0];
        *(_DWORD *)(v28 + 8) = v43.m128i_i32[2];
        *(_BYTE *)(v25 + 44) |= 2u;
      }
      break;
    case 10:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v9 = *((_QWORD *)sub_8CFFE0((__int64 *)(a1 + 768), a3) + 1);
        v10 = sub_8F4170(*(_QWORD *)(v29 + 568));
LABEL_36:
        *(_BYTE *)(v9 + *(unsigned int *)(*(_QWORD *)(v9 + 32) + 16LL) + 40) = v10;
        *(_BYTE *)(v9 + 44) |= 2u;
      }
      break;
    case 11:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v31 = *((_QWORD *)sub_8CFFE0((__int64 *)(a1 + 768), a3) + 1);
        sub_8F5730((__int64)&v43, *(_QWORD *)(v30 + 568));
        v32 = *(unsigned int *)(*(_QWORD *)(v31 + 32) + 16LL);
        v33 = v31 + v32 + 40;
        if ( *(_DWORD *)(v31 + v32 + 48) > 0x40u && *(_QWORD *)v33 )
          operator delete[](*(void **)v33);
        *(_QWORD *)v33 = v43.m128i_i64[0];
        *(_DWORD *)(v33 + 8) = v43.m128i_i32[2];
        *(_BYTE *)(v33 + 12) = v43.m128i_i8[12];
        *(_DWORD *)(v33 + 16) = v44;
        *(_BYTE *)(v31 + 44) |= 2u;
      }
      break;
    case 12:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v35 = *((_QWORD *)sub_8CFFE0((__int64 *)(a1 + 768), a3) + 1);
        sub_8F4110((__int64)&v43, *(_QWORD *)(v34 + 568));
        sub_8DBA70((__int64 *)(v35 + *(unsigned int *)(*(_QWORD *)(v35 + 32) + 16LL) + 40), v43.m128i_i64, v36);
        sub_5FF3B0(v43.m128i_i64);
        *(_BYTE *)(v35 + 44) |= 2u;
      }
      break;
    case 13:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v38 = *((_QWORD *)sub_8CFFE0((__int64 *)(a1 + 768), a3) + 1);
        sub_8F41A0((__int64)&v43, *(_QWORD *)(v37 + 568));
        sub_A1C200(v38 + *(unsigned int *)(*(_QWORD *)(v38 + 32) + 16LL) + 40, &v43, v39);
        sub_A1C0C0(&v43);
        *(_BYTE *)(v38 + 44) |= 2u;
      }
      break;
    case 14:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v41 = *((_QWORD *)sub_8CFFE0((__int64 *)(a1 + 768), a3) + 1);
        sub_8F5130(&v43, *(_QWORD *)(v40 + 568));
        v42 = *(unsigned int *)(*(_QWORD *)(v41 + 32) + 16LL);
        *(__m128i *)(v41 + v42 + 40) = _mm_load_si128(&v43);
        *(_BYTE *)(v41 + v42 + 56) = v44;
        *(_BYTE *)(v41 + 44) |= 2u;
      }
      break;
    case 15:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v5 = *((_QWORD *)sub_8CFFE0((__int64 *)(a1 + 768), a3) + 1);
        sub_8F5170((__int64)&v43, *(_QWORD *)(v4 + 568));
        v6 = v5 + *(unsigned int *)(*(_QWORD *)(v5 + 32) + 16LL) + 40;
        sub_A1C200(v6, &v43, v7);
        *(_QWORD *)(v6 + 56) = v45;
        *(_DWORD *)(v6 + 64) = v46;
        sub_A1C0C0(&v43);
        *(_BYTE *)(v5 + 44) |= 2u;
      }
      break;
  }
  return 1;
}

