int __fastcall sub_1216EB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v10; // eax
  int v11; // edx
  size_t v12; // rbp
  const void *v13; // r12
  __int64 v14; // rax
  size_t v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __m128i v18; // xmm1
  size_t v19; // rdx
  char **v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __m128i v23; // xmm3
  unsigned __int64 v24; // rax
  const char **v25; // rdx
  unsigned __int64 v26; // rax
  size_t v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __m128i v31; // [rsp+0h] [rbp-58h] BYREF
  __m128i v32; // [rsp+10h] [rbp-48h] BYREF

  v10 = *(_DWORD *)(a1 + 44);
  if ( v10 == 13 )
  {
    sub_1216DF0(a3, &qword_2BAEC98 - 1, &qword_2BAEC98);
    sub_1216DF0(a5, &qword_2BAEC98 - 1, &qword_2BAEC98);
    LODWORD(v14) = *(_DWORD *)(a1 + 32);
    if ( (_DWORD)v14 == 30 )
    {
      sub_1216DF0(a4, (const char **)&off_2BAEC88 - 1, (const char **)&off_2BAEC88);
      v20 = (char **)&off_2BAEC90;
    }
    else if ( (unsigned int)v14 <= 0x1E )
    {
      if ( (_DWORD)v14 != 29 )
        return v14;
      sub_1216DF0(a4, (const char **)&off_2BAEC90 - 1, (const char **)&off_2BAEC90);
      v20 = &off_2BAEC88;
    }
    else if ( (_DWORD)v14 == 37 )
    {
      sub_1216DF0(a4, (const char **)&off_2BAEC80[-1], (const char **)off_2BAEC80);
      v20 = off_2BAEC78;
    }
    else
    {
      if ( (_DWORD)v14 != 38 )
        return v14;
      sub_1216DF0(a4, (const char **)&off_2BAEC78[-1], (const char **)off_2BAEC78);
      v20 = off_2BAEC80;
    }
LABEL_30:
    LODWORD(v14) = sub_1216DF0(a6, (const char **)v20 - 1, (const char **)v20);
    return v14;
  }
  v11 = *(_DWORD *)(a1 + 48);
  if ( v11 == 17 )
  {
    switch ( *(_DWORD *)(a1 + 32) )
    {
      case 1:
      case 0x23:
        sub_1216DF0(a3, (const char **)&off_2BAF0F0 - 1, (const char **)&off_2BAF0F0);
        LODWORD(v14) = sub_1216DF0(a4, (const char **)&off_2BAEC68[-1], (const char **)off_2BAEC68);
        break;
      case 3:
        sub_1216DF0(a3, (const char **)&off_2BAF130 - 2, (const char **)&off_2BAF130);
        LODWORD(v14) = sub_1216DF0(a4, (const char **)&off_2BAEC70[-1], (const char **)off_2BAEC70);
        break;
      case 0x25:
        sub_1216DF0(a3, (const char **)&off_2BAEFD0 - 2, (const char **)&off_2BAEFD0);
        sub_1216DF0(a4, (const char **)&off_2BAEC60[-1], (const char **)off_2BAEC60);
        sub_1216DF0(a5, (const char **)&off_2BAF060[-2], (const char **)off_2BAF060);
        v20 = off_2BAEC58;
        goto LABEL_30;
      case 0x26:
        sub_1216DF0(a3, (const char **)&off_2BAF060[-2], (const char **)off_2BAF060);
        sub_1216DF0(a4, (const char **)&off_2BAEC58[-1], (const char **)off_2BAEC58);
        sub_1216DF0(a5, (const char **)&off_2BAEFD0 - 2, (const char **)&off_2BAEFD0);
        v20 = off_2BAEC60;
        goto LABEL_30;
      default:
        LODWORD(v14) = *(_DWORD *)(a1 + 44);
        break;
    }
  }
  else if ( v10 == 35 )
  {
    LODWORD(v14) = *(_DWORD *)(a1 + 32);
    if ( (_DWORD)v14 == 37 )
    {
      sub_1216DF0(a3, (const char **)&off_2BAEFD0 - 2, (const char **)&off_2BAEFD0);
      v27 = j__strlen("i686-gnu");
      LODWORD(v14) = (unsigned int)sub_111E070(a4, (__int64)"i686-gnu", v27);
    }
    else if ( (_DWORD)v14 == 38 )
    {
      sub_1216DF0(a3, (const char **)&off_2BAF060[-2], (const char **)off_2BAF060);
      v19 = j__strlen("x86_64-gnu");
      LODWORD(v14) = (unsigned int)sub_111E070(a4, (__int64)"x86_64-gnu", v19);
    }
  }
  else if ( v11 == 29 && v10 == 15 )
  {
    v15 = j__strlen("/lib");
    sub_111E070(a3, (__int64)"/lib", v15);
    LODWORD(v14) = *(_DWORD *)(a1 + 32);
    if ( (_DWORD)v14 == 37 )
    {
      v21 = *(unsigned int *)(a4 + 12);
      v31.m128i_i64[1] = 14;
      v31.m128i_i64[0] = (__int64)"i686-pc-cygwin";
      v32.m128i_i64[0] = (__int64)"i686-pc-msys";
      v22 = *(unsigned int *)(a4 + 8);
      v32.m128i_i64[1] = 12;
      if ( v22 + 2 > v21 )
      {
        sub_2237220(a4, a4 + 16, v22 + 2, 16);
        v22 = *(unsigned int *)(a4 + 8);
      }
      v23 = _mm_load_si128(&v32);
      v14 = *(_QWORD *)a4 + 16 * v22;
      *(__m128i *)v14 = _mm_load_si128(&v31);
      *(__m128i *)(v14 + 16) = v23;
      *(_DWORD *)(a4 + 8) += 2;
    }
    else if ( (_DWORD)v14 == 38 )
    {
      v16 = *(unsigned int *)(a4 + 12);
      v31.m128i_i64[1] = 16;
      v31.m128i_i64[0] = (__int64)"x86_64-pc-cygwin";
      v32.m128i_i64[0] = (__int64)"x86_64-pc-msys";
      v17 = *(unsigned int *)(a4 + 8);
      v32.m128i_i64[1] = 14;
      if ( v17 + 2 > v16 )
      {
        sub_2237220(a4, a4 + 16, v17 + 2, 16);
        v17 = *(unsigned int *)(a4 + 8);
      }
      v18 = _mm_load_si128(&v32);
      v14 = *(_QWORD *)a4 + 16 * v17;
      *(__m128i *)v14 = _mm_load_si128(&v31);
      *(__m128i *)(v14 + 16) = v18;
      *(_DWORD *)(a4 + 8) += 2;
    }
  }
  else
  {
    switch ( *(_DWORD *)(a1 + 32) )
    {
      case 1:
      case 0x23:
        sub_1216DF0(a3, (const char **)&off_2BAF0F0 - 1, (const char **)&off_2BAF0F0);
        v26 = *(unsigned int *)(a1 + 48);
        if ( (unsigned int)v26 <= 0x16 && (v28 = 4260224, _bittest64(&v28, v26)) )
          sub_1216DF0(a4, (const char **)&off_2BAF0E0 - 4, (const char **)&off_2BAF0E0);
        else
          sub_1216DF0(a4, (const char **)&off_2BAF0E8 - 1, (const char **)&off_2BAF0E8);
        break;
      case 2:
      case 0x24:
        sub_1216DF0(a3, (const char **)&unk_2BAF0B0 - 1, (const char **)&unk_2BAF0B0);
        v24 = *(unsigned int *)(a1 + 48);
        if ( (unsigned int)v24 <= 0x16 && (v29 = 4260224, _bittest64(&v29, v24)) )
          sub_1216DF0(a4, (const char **)&off_2BAF0A0 - 2, (const char **)&off_2BAF0A0);
        else
          sub_1216DF0(a4, (const char **)&off_2BAF0A8 - 1, (const char **)&off_2BAF0A8);
        break;
      case 3:
        sub_1216DF0(a3, (const char **)&off_2BAF130 - 2, (const char **)&off_2BAF130);
        sub_1216DF0(a4, &qword_2BAF118 - 3, &qword_2BAF118);
        sub_1216DF0(a5, (const char **)&off_2BAF130 - 2, (const char **)&off_2BAF130);
        sub_1216DF0(a6, &qword_2BAF118 - 3, &qword_2BAF118);
        break;
      case 4:
        sub_1216DF0(a3, (const char **)&off_2BAF100[-1], (const char **)off_2BAF100);
        sub_1216DF0(a4, (const char **)&off_2BAF0F8 - 1, (const char **)&off_2BAF0F8);
        sub_1216DF0(a5, (const char **)&off_2BAF100[-1], (const char **)off_2BAF100);
        sub_1216DF0(a6, (const char **)&off_2BAF0F8 - 1, (const char **)&off_2BAF0F8);
        break;
      case 7:
        sub_1216DF0(a3, (const char **)&off_2BAF090[-1], (const char **)off_2BAF090);
        sub_1216DF0(a4, (const char **)&off_2BAF088 - 1, (const char **)&off_2BAF088);
        break;
      case 0xA:
        sub_1216DF0(a3, (const char **)&off_2BAF080 - 1, (const char **)&off_2BAF080);
        sub_1216DF0(a4, (const char **)&off_2BAF078 - 3, (const char **)&off_2BAF078);
        break;
      case 0xE:
        sub_1216DF0(a3, (const char **)&off_2BAEF80[-2], (const char **)off_2BAEF80);
        sub_1216DF0(a4, (const char **)&off_2BAEF70 - 2, (const char **)&off_2BAEF70);
        break;
      case 0xF:
        sub_1216DF0(a3, &qword_2BAEF58 - 1, &qword_2BAEF58);
        sub_1216DF0(a4, (const char **)&off_2BAEF50 - 2, (const char **)&off_2BAEF50);
        break;
      case 0x10:
        sub_1216DF0(a3, (const char **)&off_2BAEF40[-2], (const char **)off_2BAEF40);
        sub_1216DF0(a4, &qword_2BAEF28 - 5, &qword_2BAEF28);
        sub_1216DF0(a5, (const char **)&off_2BAEEE0[-2], (const char **)off_2BAEEE0);
        v25 = &qword_2BAEEC8;
        goto LABEL_50;
      case 0x11:
        sub_1216DF0(a3, (const char **)&off_2BAEF00[-2], (const char **)off_2BAEF00);
        sub_1216DF0(a4, (const char **)&off_2BAEEF0 - 2, (const char **)&off_2BAEEF0);
        sub_1216DF0(a4, &qword_2BAEF28 - 5, &qword_2BAEF28);
        sub_1216DF0(a5, (const char **)&off_2BAEEA0[-2], (const char **)off_2BAEEA0);
        sub_1216DF0(a6, &qword_2BAEE88 - 5, &qword_2BAEE88);
        sub_1216DF0(a5, &qword_2BAEE38 - 1, &qword_2BAEE38);
        sub_1216DF0(a6, (const char **)&off_2BAEE30 - 2, (const char **)&off_2BAEE30);
        break;
      case 0x12:
        sub_1216DF0(a3, (const char **)&off_2BAEEE0[-2], (const char **)off_2BAEEE0);
        sub_1216DF0(a4, &qword_2BAEEC8 - 5, &qword_2BAEEC8);
        sub_1216DF0(a5, (const char **)&off_2BAEF40[-2], (const char **)off_2BAEF40);
        v25 = &qword_2BAEF28;
LABEL_50:
        sub_1216DF0(a6, v25 - 5, v25);
        sub_1216DF0(a5, &qword_2BAEE58 - 1, &qword_2BAEE58);
        sub_1216DF0(a6, (const char **)&off_2BAEE50 - 2, (const char **)&off_2BAEE50);
        break;
      case 0x13:
        sub_1216DF0(a3, (const char **)&off_2BAEEA0[-2], (const char **)off_2BAEEA0);
        sub_1216DF0(a4, &qword_2BAEE88 - 5, &qword_2BAEE88);
        sub_1216DF0(a5, (const char **)&off_2BAEF00[-2], (const char **)off_2BAEF00);
        sub_1216DF0(a6, (const char **)&off_2BAEEF0 - 2, (const char **)&off_2BAEEF0);
        sub_1216DF0(a5, &qword_2BAEE38 - 1, &qword_2BAEE38);
        sub_1216DF0(a6, (const char **)&off_2BAEE30 - 2, (const char **)&off_2BAEE30);
        sub_1216DF0(a6, &qword_2BAEF28 - 5, &qword_2BAEF28);
        break;
      case 0x14:
        sub_1216DF0(a3, (const char **)&off_2BAEE20[-1], (const char **)off_2BAEE20);
        sub_1216DF0(a4, (const char **)&off_2BAEE18 - 1, (const char **)&off_2BAEE18);
        break;
      case 0x15:
        sub_1216DF0(a3, (const char **)&off_2BAEE10 - 2, (const char **)&off_2BAEE10);
        sub_1216DF0(a4, &qword_2BAEDF8 - 3, &qword_2BAEDF8);
        sub_1216DF0(a5, (const char **)&off_2BAEDC0[-2], (const char **)off_2BAEDC0);
        sub_1216DF0(a6, &qword_2BAEDA8 - 3, &qword_2BAEDA8);
        break;
      case 0x16:
        sub_1216DF0(a3, (const char **)&off_2BAEDE0[-2], (const char **)off_2BAEDE0);
        sub_1216DF0(a4, (const char **)&off_2BAEDD0 - 2, (const char **)&off_2BAEDD0);
        sub_1216DF0(a5, (const char **)&off_2BAED90[-2], (const char **)off_2BAED90);
        sub_1216DF0(a6, (const char **)&off_2BAED80 - 4, (const char **)&off_2BAED80);
        break;
      case 0x17:
        sub_1216DF0(a3, (const char **)&off_2BAEDC0[-2], (const char **)off_2BAEDC0);
        sub_1216DF0(a4, &qword_2BAEDA8 - 3, &qword_2BAEDA8);
        sub_1216DF0(a5, (const char **)&off_2BAEE10 - 2, (const char **)&off_2BAEE10);
        sub_1216DF0(a6, &qword_2BAEDF8 - 3, &qword_2BAEDF8);
        break;
      case 0x18:
        sub_1216DF0(a3, (const char **)&off_2BAED90[-2], (const char **)off_2BAED90);
        sub_1216DF0(a4, (const char **)&off_2BAED80 - 4, (const char **)&off_2BAED80);
        sub_1216DF0(a5, (const char **)&off_2BAEDE0[-2], (const char **)off_2BAEDE0);
        sub_1216DF0(a6, (const char **)&off_2BAEDD0 - 2, (const char **)&off_2BAEDD0);
        break;
      case 0x1B:
        sub_1216DF0(a3, (const char **)&unk_2BAED50 - 2, (const char **)&unk_2BAED50);
        sub_1216DF0(a4, (const char **)&off_2BAED40 - 2, (const char **)&off_2BAED40);
        sub_1216DF0(a5, (const char **)&off_2BAED30[-2], (const char **)off_2BAED30);
        sub_1216DF0(a6, (const char **)&off_2BAED20 - 2, (const char **)&off_2BAED20);
        break;
      case 0x1C:
        sub_1216DF0(a3, (const char **)&off_2BAED30[-2], (const char **)off_2BAED30);
        sub_1216DF0(a4, (const char **)&off_2BAED20 - 2, (const char **)&off_2BAED20);
        sub_1216DF0(a5, (const char **)&unk_2BAED50 - 2, (const char **)&unk_2BAED50);
        sub_1216DF0(a6, (const char **)&off_2BAED40 - 2, (const char **)&off_2BAED40);
        break;
      case 0x1D:
      case 0x1F:
        sub_1216DF0(a3, (const char **)&off_2BAED10[-2], (const char **)off_2BAED10);
        sub_1216DF0(a4, (const char **)&off_2BAED00 - 2, (const char **)&off_2BAED00);
        sub_1216DF0(a5, (const char **)&off_2BAECF0[-2], (const char **)off_2BAECF0);
        sub_1216DF0(a6, (const char **)&off_2BAECE0 - 2, (const char **)&off_2BAECE0);
        break;
      case 0x1E:
        sub_1216DF0(a3, (const char **)&off_2BAECF0[-2], (const char **)off_2BAECF0);
        sub_1216DF0(a4, (const char **)&off_2BAECE0 - 2, (const char **)&off_2BAECE0);
        sub_1216DF0(a5, (const char **)&off_2BAED10[-2], (const char **)off_2BAED10);
        sub_1216DF0(a6, (const char **)&off_2BAED00 - 2, (const char **)&off_2BAED00);
        break;
      case 0x20:
        sub_1216DF0(a3, (const char **)&off_2BAECD0[-2], (const char **)off_2BAECD0);
        sub_1216DF0(a4, (const char **)&off_2BAECC0 - 4, (const char **)&off_2BAECC0);
        break;
      case 0x25:
        sub_1216DF0(a3, (const char **)&off_2BAEFD0 - 2, (const char **)&off_2BAEFD0);
        if ( *(_DWORD *)(a1 + 44) != 26 )
        {
          sub_1216DF0(a4, (const char **)&off_2BAEFC0 - 8, (const char **)&off_2BAEFC0);
          sub_1216DF0(a5, (const char **)&off_2BAF060[-2], (const char **)off_2BAF060);
          sub_1216DF0(a6, (const char **)&off_2BAF050 - 10, (const char **)&off_2BAF050);
          sub_1216DF0(a5, (const char **)&off_2BAEFE0[-2], (const char **)off_2BAEFE0);
          sub_1216DF0(a6, (const char **)&unk_2BAEFF0 - 2, (const char **)&unk_2BAEFF0);
        }
        break;
      case 0x26:
        if ( v11 == 12 || v11 == 25 )
        {
          sub_1216DF0(a3, (const char **)&off_2BAEFE0[-2], (const char **)off_2BAEFE0);
          sub_1216DF0(a4, (const char **)&unk_2BAEFF0 - 2, (const char **)&unk_2BAEFF0);
          sub_1216DF0(a5, (const char **)&off_2BAF060[-2], (const char **)off_2BAF060);
          sub_1216DF0(a6, (const char **)&off_2BAF050 - 10, (const char **)&off_2BAF050);
        }
        else
        {
          sub_1216DF0(a3, (const char **)&off_2BAF060[-2], (const char **)off_2BAF060);
          sub_1216DF0(a4, (const char **)&off_2BAF050 - 10, (const char **)&off_2BAF050);
          sub_1216DF0(a5, (const char **)&off_2BAEFE0[-2], (const char **)off_2BAEFE0);
          sub_1216DF0(a6, (const char **)&unk_2BAEFF0 - 2, (const char **)&unk_2BAEFF0);
        }
        sub_1216DF0(a5, (const char **)&off_2BAEFD0 - 2, (const char **)&off_2BAEFD0);
        sub_1216DF0(a6, (const char **)&off_2BAEFC0 - 8, (const char **)&off_2BAEFC0);
        break;
      default:
        break;
    }
    v12 = *(_QWORD *)(a2 + 8);
    v13 = *(const void **)a2;
    if ( *(_QWORD *)(a1 + 8) != v12 || (LODWORD(v14) = sub_9B48C0(*(const void **)a1, v13, v12), (_DWORD)v14) )
      LODWORD(v14) = (unsigned int)sub_111E070(a6, (__int64)v13, v12);
  }
  return v14;
}
