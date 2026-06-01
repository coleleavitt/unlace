__int64 __fastcall sub_91B610(__int64 a1, int a2, unsigned int a3, _QWORD *a4)
{
  __m128i *v5; // r12
  __m128i *v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rdx
  char v9; // bl
  _BYTE *v10; // rax
  __int16 v11; // bx
  _WORD *v12; // rax
  int v13; // ebx
  _DWORD *v14; // rax
  __int64 v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __m128i *v24; // rax
  __m128i v25; // [rsp+0h] [rbp-A8h] BYREF
  int v26; // [rsp+10h] [rbp-98h]
  __int64 v27[8]; // [rsp+40h] [rbp-68h] BYREF
  int v28; // [rsp+80h] [rbp-28h]

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a4;
        sub_A1BF70(v27, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 560) + 224LL) + 8LL * a3));
        v9 = sub_915550(*(_QWORD *)(a1 + 568));
        v10 = (_BYTE *)sub_8F63E0(v27);
        goto LABEL_36;
      }
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a4;
        sub_A1BF70(v27, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 560) + 224LL) + 8LL * a3));
        v9 = sub_915900(*(_QWORD *)(a1 + 568));
        v10 = (_BYTE *)sub_8F6BD0(v27);
        goto LABEL_36;
      }
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a4;
        sub_A1BF70(v27, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 560) + 224LL) + 8LL * a3));
        v11 = sub_915930(*(_QWORD *)(a1 + 568));
        v12 = (_WORD *)sub_8F6C20(v27);
        goto LABEL_15;
      }
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a4;
        sub_A1BF70(v27, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 560) + 224LL) + 8LL * a3));
        v11 = sub_915CE0(*(_QWORD *)(a1 + 568));
        v12 = (_WORD *)sub_8F7430(v27);
LABEL_15:
        *v12 = v11;
        sub_A1DB00(v27);
        sub_A1C0C0(v27);
      }
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a4;
        sub_A1BF70(v27, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 560) + 224LL) + 8LL * a3));
        v13 = sub_915D10(*(_QWORD *)(a1 + 568));
        v14 = (_DWORD *)sub_8F7480(v27);
        goto LABEL_20;
      }
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a4;
        sub_A1BF70(v27, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 560) + 224LL) + 8LL * a3));
        v13 = sub_9160C0(*(_QWORD *)(a1 + 568));
        v14 = (_DWORD *)sub_8F7C70(v27);
LABEL_20:
        *v14 = v13;
        sub_A1DB00(v27);
        sub_A1C0C0(v27);
      }
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a4;
        sub_A1BF70(v27, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 560) + 224LL) + 8LL * a3));
        v15 = sub_9160F0(*(_QWORD *)(a1 + 568));
        v16 = (_QWORD *)sub_8F7CC0(v27);
        goto LABEL_25;
      }
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a4;
        sub_A1BF70(v27, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 560) + 224LL) + 8LL * a3));
        v15 = sub_9164A0(*(_QWORD *)(a1 + 568));
        v16 = (_QWORD *)sub_8F84D0(v27);
LABEL_25:
        *v16 = v15;
        sub_A1DB00(v27);
        sub_A1C0C0(v27);
      }
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a4;
        sub_A1BF70(v27, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 560) + 224LL) + 8LL * a3));
        sub_919FD0((__int64)&v25, *(_QWORD *)(a1 + 568));
        v17 = sub_8F8520(v27);
        if ( *(_DWORD *)(v17 + 8) <= 0x40u )
          goto LABEL_33;
        goto LABEL_31;
      }
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a4;
        sub_A1BF70(v27, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 560) + 224LL) + 8LL * a3));
        sub_91A020((__int64)&v25, *(_QWORD *)(a1 + 568));
        v17 = sub_8F8D30(v27);
        if ( *(_DWORD *)(v17 + 8) > 0x40u )
        {
LABEL_31:
          if ( *(_QWORD *)v17 )
            operator delete[](*(void **)v17);
        }
LABEL_33:
        *(_QWORD *)v17 = v25.m128i_i64[0];
        *(_DWORD *)(v17 + 8) = v25.m128i_i32[2];
        sub_A1DB00(v27);
        sub_A1C0C0(v27);
      }
      break;
    case 10:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a4;
        sub_A1BF70(v27, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 560) + 224LL) + 8LL * a3));
        v9 = sub_8F4170(*(_QWORD *)(a1 + 568));
        v10 = (_BYTE *)sub_8F9850(v27);
LABEL_36:
        *v10 = v9;
        sub_A1DB00(v27);
        sub_A1C0C0(v27);
      }
      break;
    case 11:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a4;
        sub_A1BF70(v27, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 560) + 224LL) + 8LL * a3));
        sub_8F5730((__int64)&v25, *(_QWORD *)(a1 + 568));
        v18 = sub_8FA0E0(v27);
        v19 = v18;
        if ( *(_DWORD *)(v18 + 8) > 0x40u && *(_QWORD *)v18 )
          operator delete[](*(void **)v18);
        *(_QWORD *)v19 = v25.m128i_i64[0];
        *(_DWORD *)(v19 + 8) = v25.m128i_i32[2];
        *(_BYTE *)(v19 + 12) = v25.m128i_i8[12];
        *(_DWORD *)(v19 + 16) = v26;
        sub_A1DB00(v27);
        sub_A1C0C0(v27);
      }
      break;
    case 12:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a4;
        sub_A1BF70(v27, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 560) + 224LL) + 8LL * a3));
        sub_8F4110((__int64)&v25, *(_QWORD *)(a1 + 568));
        v20 = (__int64 *)sub_8F8D80(v27);
        sub_8DBA70(v20, v25.m128i_i64, v21);
        sub_5FF3B0(v25.m128i_i64);
        sub_A1DB00(v27);
        sub_A1C0C0(v27);
      }
      break;
    case 13:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v6 = (__m128i *)v27;
        v5 = &v25;
        *(_QWORD *)(a1 + 800) = *a4;
        sub_A1BF70(v27, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 560) + 224LL) + 8LL * a3));
        sub_8F41A0((__int64)&v25, *(_QWORD *)(a1 + 568));
        v22 = sub_8F9CB0(v27);
        sub_A1C200(v22, &v25, v23);
        goto LABEL_46;
      }
      break;
    case 14:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a4;
        sub_A1BF70(v27, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 560) + 224LL) + 8LL * a3));
        sub_8F5130(&v25, *(_QWORD *)(a1 + 568));
        v24 = (__m128i *)sub_8FA040(v27);
        *v24 = _mm_load_si128(&v25);
        v24[1].m128i_i8[0] = v26;
        sub_A1DB00(v27);
        sub_A1C0C0(v27);
      }
      break;
    case 15:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v5 = (__m128i *)v27;
        v6 = &v25;
        *(_QWORD *)(a1 + 800) = *a4;
        sub_A1BF70(&v25, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 560) + 224LL) + 8LL * a3));
        sub_8F5170((__int64)v27, *(_QWORD *)(a1 + 568));
        v7 = sub_8FA090(v25.m128i_i64);
        sub_A1C200(v7, v27, v8);
        *(_QWORD *)(v7 + 56) = v27[7];
        *(_DWORD *)(v7 + 64) = v28;
LABEL_46:
        sub_A1C0C0(v5);
        sub_A1DB00(v6);
        sub_A1C0C0(v6);
      }
      break;
  }
  return 1;
}

