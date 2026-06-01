_BYTE *__fastcall sub_EB15F0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  _BYTE *v5; // rax
  char v6; // si
  __int64 v7; // rbp
  _QWORD *v8; // rbx
  _QWORD *v9; // r12
  _WORD *v10; // rdx
  _DWORD *v11; // rdx
  void *v12; // rdx
  void *v13; // rdx
  __int64 v14; // rdx
  _DWORD *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  void *v18; // rdx
  void *v19; // rdx
  __m128i *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  _QWORD *v23; // rdx
  _DWORD *v24; // rdx
  __m128i *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  _QWORD *v28; // rdx
  _DWORD *v29; // rdx
  void *v30; // rdx
  _BYTE *result; // rax
  __int64 v32; // rax
  _WORD *v33; // rcx
  __m128i v34; // xmm0
  __m128i si128; // xmm0

  v4 = *a1;
  switch ( *(_BYTE *)(a2 + 8) )
  {
    case 0:
      v26 = *(_QWORD *)(v4 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v4 + 24) - v26) > 4 )
      {
        *(_DWORD *)v26 = 1853453153;
        *(_BYTE *)(v26 + 4) = 99;
        v5 = (_BYTE *)(*(_QWORD *)(v4 + 32) + 5LL);
        *(_QWORD *)(v4 + 32) = v5;
      }
      else
      {
        v4 = sub_227BF10(v4, "async", 5);
        v5 = *(_BYTE **)(v4 + 32);
      }
      break;
    case 1:
      v4 = sub_995540(v4, "attach");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 2:
      v4 = sub_995540(v4, "auto");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 3:
      v29 = *(_DWORD **)(v4 + 32);
      if ( *(_QWORD *)(v4 + 24) - (_QWORD)v29 > 3u )
      {
        *v29 = 1684957538;
        v5 = (_BYTE *)(*(_QWORD *)(v4 + 32) + 4LL);
        *(_QWORD *)(v4 + 32) = v5;
      }
      else
      {
        v4 = sub_227BF10(v4, "bind", 4);
        v5 = *(_BYTE **)(v4 + 32);
      }
      break;
    case 4:
      v28 = *(_QWORD **)(v4 + 32);
      if ( *(_QWORD *)(v4 + 24) - (_QWORD)v28 > 7u )
      {
        *v28 = 0x657370616C6C6F63LL;
        v5 = (_BYTE *)(*(_QWORD *)(v4 + 32) + 8LL);
        *(_QWORD *)(v4 + 32) = v5;
      }
      else
      {
        v4 = sub_227BF10(v4, "collapse", 8);
        v5 = *(_BYTE **)(v4 + 32);
      }
      break;
    case 5:
      v4 = sub_995540(v4, "copy");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 6:
      v4 = sub_995540(v4, "pcopy");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 7:
      v4 = sub_995540(v4, "present_or_copy");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 8:
      v4 = sub_995540(v4, "copyin");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 9:
      v4 = sub_995540(v4, "pcopyin");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 0xA:
      v25 = *(__m128i **)(v4 + 32);
      if ( *(_QWORD *)(v4 + 24) - (_QWORD)v25 > 0x10u )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A9010);
        v25[1].m128i_i8[0] = 110;
        *v25 = si128;
        v5 = (_BYTE *)(*(_QWORD *)(v4 + 32) + 17LL);
        *(_QWORD *)(v4 + 32) = v5;
      }
      else
      {
        v4 = sub_227BF10(v4, "present_or_copyin", 17);
        v5 = *(_BYTE **)(v4 + 32);
      }
      break;
    case 0xB:
      v4 = sub_995540(v4, "copyout");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 0xC:
      v4 = sub_995540(v4, "pcopyout");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 0xD:
      v4 = sub_995540(v4, "present_or_copyout");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 0xE:
      v17 = *(_QWORD *)(v4 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v4 + 24) - v17) > 5 )
      {
        *(_DWORD *)v17 = 1634038371;
        *(_WORD *)(v17 + 4) = 25972;
        v5 = (_BYTE *)(*(_QWORD *)(v4 + 32) + 6LL);
        *(_QWORD *)(v4 + 32) = v5;
      }
      else
      {
        v4 = sub_227BF10(v4, "create", 6);
        v5 = *(_BYTE **)(v4 + 32);
      }
      break;
    case 0xF:
      v21 = *(_QWORD *)(v4 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v4 + 24) - v21) > 6 )
      {
        *(_DWORD *)v21 = 1701995376;
        *(_WORD *)(v21 + 4) = 29793;
        *(_BYTE *)(v21 + 6) = 101;
        v5 = (_BYTE *)(*(_QWORD *)(v4 + 32) + 7LL);
        *(_QWORD *)(v4 + 32) = v5;
      }
      else
      {
        v4 = sub_227BF10(v4, "pcreate", 7);
        v5 = *(_BYTE **)(v4 + 32);
      }
      break;
    case 0x10:
      v20 = *(__m128i **)(v4 + 32);
      if ( *(_QWORD *)(v4 + 24) - (_QWORD)v20 > 0x10u )
      {
        v34 = _mm_load_si128((const __m128i *)&xmmword_23A9020);
        v20[1].m128i_i8[0] = 101;
        *v20 = v34;
        v5 = (_BYTE *)(*(_QWORD *)(v4 + 32) + 17LL);
        *(_QWORD *)(v4 + 32) = v5;
      }
      else
      {
        v4 = sub_227BF10(v4, "present_or_create", 17);
        v5 = *(_BYTE **)(v4 + 32);
      }
      break;
    case 0x11:
      v4 = sub_995540(v4, "default");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 0x12:
      v19 = *(void **)(v4 + 32);
      if ( *(_QWORD *)(v4 + 24) - (_QWORD)v19 > 0xCu )
      {
        qmemcpy(v19, "default_async", 13);
        v5 = (_BYTE *)(*(_QWORD *)(v4 + 32) + 13LL);
        *(_QWORD *)(v4 + 32) = v5;
      }
      else
      {
        v4 = sub_227BF10(v4, "default_async", 13);
        v5 = *(_BYTE **)(v4 + 32);
      }
      break;
    case 0x13:
      v4 = sub_995540(v4, "delete");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 0x14:
      v4 = sub_995540(v4, "detach");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 0x15:
      v4 = sub_995540(v4, "device");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 0x16:
      v18 = *(void **)(v4 + 32);
      if ( *(_QWORD *)(v4 + 24) - (_QWORD)v18 > 9u )
      {
        qmemcpy(v18, "device_num", 10);
        v5 = (_BYTE *)(*(_QWORD *)(v4 + 32) + 10LL);
        *(_QWORD *)(v4 + 32) = v5;
      }
      else
      {
        v4 = sub_227BF10(v4, "device_num", 10);
        v5 = *(_BYTE **)(v4 + 32);
      }
      break;
    case 0x17:
      v4 = sub_995540(v4, "deviceptr");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 0x18:
      v4 = sub_995540(v4, "device_resident");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 0x19:
      v30 = *(void **)(v4 + 32);
      if ( *(_QWORD *)(v4 + 24) - (_QWORD)v30 > 0xAu )
      {
        qmemcpy(v30, "device_type", 11);
        v5 = (_BYTE *)(*(_QWORD *)(v4 + 32) + 11LL);
        *(_QWORD *)(v4 + 32) = v5;
      }
      else
      {
        v4 = sub_227BF10(v4, "device_type", 11);
        v5 = *(_BYTE **)(v4 + 32);
      }
      break;
    case 0x1A:
      v22 = *(_QWORD *)(v4 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v4 + 24) - v22) > 4 )
      {
        *(_DWORD *)v22 = 1887007844;
        *(_BYTE *)(v22 + 4) = 101;
        v5 = (_BYTE *)(*(_QWORD *)(v4 + 32) + 5LL);
        *(_QWORD *)(v4 + 32) = v5;
      }
      else
      {
        v4 = sub_227BF10(v4, "dtype", 5);
        v5 = *(_BYTE **)(v4 + 32);
      }
      break;
    case 0x1B:
      v23 = *(_QWORD **)(v4 + 32);
      if ( *(_QWORD *)(v4 + 24) - (_QWORD)v23 > 7u )
      {
        *v23 = 0x657A696C616E6966LL;
        v5 = (_BYTE *)(*(_QWORD *)(v4 + 32) + 8LL);
        *(_QWORD *)(v4 + 32) = v5;
      }
      else
      {
        v4 = sub_227BF10(v4, "finalize", 8);
        v5 = *(_BYTE **)(v4 + 32);
      }
      break;
    case 0x1C:
      v4 = sub_995540(v4, "firstprivate");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 0x1D:
      v24 = *(_DWORD **)(v4 + 32);
      if ( *(_QWORD *)(v4 + 24) - (_QWORD)v24 > 3u )
      {
        *v24 = 1735287143;
        v5 = (_BYTE *)(*(_QWORD *)(v4 + 32) + 4LL);
        *(_QWORD *)(v4 + 32) = v5;
      }
      else
      {
        v4 = sub_227BF10(v4, "gang", 4);
        v5 = *(_BYTE **)(v4 + 32);
      }
      break;
    case 0x1E:
      v4 = sub_995540(v4, "host");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 0x1F:
      v4 = sub_995540(v4, "if");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 0x20:
      v4 = sub_995540(v4, "if_present");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 0x21:
      v4 = sub_995540(v4, "independent");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 0x22:
      v4 = sub_995540(v4, "link");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 0x23:
      v4 = sub_995540(v4, "no_create");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 0x24:
      v4 = sub_995540(v4, "nohost");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 0x25:
      v14 = *(_QWORD *)(v4 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v4 + 24) - v14) > 8 )
      {
        *(_BYTE *)(v14 + 8) = 115;
        *(_QWORD *)v14 = 0x676E61675F6D756ELL;
        v5 = (_BYTE *)(*(_QWORD *)(v4 + 32) + 9LL);
        *(_QWORD *)(v4 + 32) = v5;
      }
      else
      {
        v4 = sub_227BF10(v4, "num_gangs", 9);
        v5 = *(_BYTE **)(v4 + 32);
      }
      break;
    case 0x26:
      v13 = *(void **)(v4 + 32);
      if ( *(_QWORD *)(v4 + 24) - (_QWORD)v13 > 0xAu )
      {
        qmemcpy(v13, "num_workers", 11);
        v5 = (_BYTE *)(*(_QWORD *)(v4 + 32) + 11LL);
        *(_QWORD *)(v4 + 32) = v5;
      }
      else
      {
        v4 = sub_227BF10(v4, "num_workers", 11);
        v5 = *(_BYTE **)(v4 + 32);
      }
      break;
    case 0x27:
      v4 = sub_995540(v4, "present");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 0x28:
      v4 = sub_995540(v4, "private");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 0x29:
      v16 = *(_QWORD *)(v4 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v4 + 24) - v16) > 8 )
      {
        *(_BYTE *)(v16 + 8) = 110;
        *(_QWORD *)v16 = 0x6F69746375646572LL;
        v5 = (_BYTE *)(*(_QWORD *)(v4 + 32) + 9LL);
        *(_QWORD *)(v4 + 32) = v5;
      }
      else
      {
        v4 = sub_227BF10(v4, "reduction", 9);
        v5 = *(_BYTE **)(v4 + 32);
      }
      break;
    case 0x2A:
      v4 = sub_995540(v4, "self");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 0x2B:
      v4 = sub_995540(v4, "seq");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 0x2C:
      v15 = *(_DWORD **)(v4 + 32);
      if ( *(_QWORD *)(v4 + 24) - (_QWORD)v15 > 3u )
      {
        *v15 = 1701603700;
        v5 = (_BYTE *)(*(_QWORD *)(v4 + 32) + 4LL);
        *(_QWORD *)(v4 + 32) = v5;
      }
      else
      {
        v4 = sub_227BF10(v4, "tile", 4);
        v5 = *(_BYTE **)(v4 + 32);
      }
      break;
    case 0x2D:
      v4 = sub_995540(v4, "use_device");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 0x2E:
      v4 = sub_995540(v4, "vector");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 0x2F:
      v12 = *(void **)(v4 + 32);
      if ( *(_QWORD *)(v4 + 24) - (_QWORD)v12 > 0xCu )
      {
        qmemcpy(v12, "vector_length", 13);
        v5 = (_BYTE *)(*(_QWORD *)(v4 + 32) + 13LL);
        *(_QWORD *)(v4 + 32) = v5;
      }
      else
      {
        v4 = sub_227BF10(v4, "vector_length", 13);
        v5 = *(_BYTE **)(v4 + 32);
      }
      break;
    case 0x30:
      v11 = *(_DWORD **)(v4 + 32);
      if ( *(_QWORD *)(v4 + 24) - (_QWORD)v11 > 3u )
      {
        *v11 = 1953063287;
        v5 = (_BYTE *)(*(_QWORD *)(v4 + 32) + 4LL);
        *(_QWORD *)(v4 + 32) = v5;
      }
      else
      {
        v4 = sub_227BF10(v4, "wait", 4);
        v5 = *(_BYTE **)(v4 + 32);
      }
      break;
    case 0x31:
      v4 = sub_995540(v4, "worker");
      v5 = *(_BYTE **)(v4 + 32);
      break;
    case 0x32:
    case 0x33:
      v27 = *(_QWORD *)(v4 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v4 + 24) - v27) > 8 )
      {
        *(_BYTE *)(v27 + 8) = 62;
        *(_QWORD *)v27 = 0x64696C61766E693CLL;
        v5 = (_BYTE *)(*(_QWORD *)(v4 + 32) + 9LL);
        *(_QWORD *)(v4 + 32) = v5;
      }
      else
      {
        v4 = sub_227BF10(v4, "<invalid>", 9);
        v5 = *(_BYTE **)(v4 + 32);
      }
      break;
  }
  if ( *(_QWORD *)(v4 + 24) <= (unsigned __int64)v5 )
  {
    sub_227BA10(v4, 40);
  }
  else
  {
    *(_QWORD *)(v4 + 32) = v5 + 1;
    *v5 = 40;
  }
  v6 = *(_BYTE *)(a2 + 40);
  v7 = *a1;
  if ( v6 )
  {
    v32 = sub_EB11A0(*a1, v6);
    v33 = *(_WORD **)(v32 + 32);
    if ( *(_QWORD *)(v32 + 24) - (_QWORD)v33 > 1u )
    {
      *v33 = 8250;
      *(_QWORD *)(v32 + 32) += 2LL;
    }
    else
    {
      sub_227BF10(v32, ": ", 2);
    }
    v7 = *a1;
  }
  v8 = *(_QWORD **)(a2 + 24);
  v9 = &v8[*(_QWORD *)(a2 + 32)];
  if ( v8 != v9 )
  {
    sub_F07C00(*v8, v7, 0, a1[1], 0, 0, (__int64)"\n", 1);
    while ( v9 != ++v8 )
    {
      v10 = *(_WORD **)(v7 + 32);
      if ( *(_QWORD *)(v7 + 24) - (_QWORD)v10 > 1u )
      {
        *v10 = 8236;
        *(_QWORD *)(v7 + 32) += 2LL;
      }
      else
      {
        sub_227BF10(v7, ", ", 2);
      }
      sub_F07C00(*v8, *a1, 0, a1[1], 0, 0, (__int64)"\n", 1);
    }
    v7 = *a1;
  }
  result = *(_BYTE **)(v7 + 32);
  if ( result == *(_BYTE **)(v7 + 24) )
    return (_BYTE *)sub_227BF10(v7, ")", 1);
  *result = 41;
  ++*(_QWORD *)(v7 + 32);
  return result;
}
