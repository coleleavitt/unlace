const char *__fastcall sub_F700(
        __int64 a1,
        unsigned int *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  unsigned int v14; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  unsigned int v21; // eax
  __int64 v22; // rdx
  char v23; // [rsp+0h] [rbp-8h]
  char v24; // [rsp+0h] [rbp-8h]

  if ( *(_WORD *)(*(_QWORD *)(a1 + 16) + 522LL) != 45 || a2 )
  {
    v14 = *a2;
    if ( (*a2 & 0x100) != 0 )
    {
      BYTE1(v14) &= ~1u;
      *a2 = v14;
      return "File contains position independent code";
    }
    switch ( (char)v14 )
    {
      case 0:
        sub_F630(
          (__int64)"-a4\n",
          (__int64)a2,
          (unsigned __int8)v14,
          a12,
          a13,
          a14,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          v23);
        goto LABEL_7;
      case 1:
        sub_F630(
          (__int64)"-a5\n",
          (__int64)a2,
          (unsigned __int8)v14,
          a12,
          a13,
          a14,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          v23);
        goto LABEL_7;
      case 2:
        sub_F630(
          (__int64)"-arc600\n",
          (__int64)a2,
          (unsigned __int8)v14,
          a12,
          a13,
          a14,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          v23);
        goto LABEL_7;
      case 3:
        sub_F630(
          (__int64)"-arc700\n",
          (__int64)a2,
          (unsigned __int8)v14,
          a12,
          a13,
          a14,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          v23);
        goto LABEL_7;
      case 4:
        sub_F630(
          (__int64)"-arc601\n",
          (__int64)a2,
          (unsigned __int8)v14,
          a12,
          a13,
          a14,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          v23);
        goto LABEL_7;
      case 5:
        sub_F630(
          (__int64)"-av2em\n",
          (__int64)a2,
          (unsigned __int8)v14,
          a12,
          a13,
          a14,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          v23);
        goto LABEL_7;
      case 6:
        sub_F630(
          (__int64)"-av2hs\n",
          (__int64)a2,
          (unsigned __int8)v14,
          a12,
          a13,
          a14,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          v23);
LABEL_7:
        v22 = *a2;
        v21 = *a2 & 0xF00;
        LOBYTE(v22) = 0;
        *a2 = v22;
        if ( v21 == 768 )
        {
          sub_F630(
            (__int64)"ABI: v3 no-legacy-syscalls ABI\n",
            (__int64)a2,
            v22,
            v16,
            v17,
            v18,
            a3,
            a4,
            a5,
            a6,
            v19,
            v20,
            a9,
            a10,
            v24);
          goto LABEL_12;
        }
        if ( v21 <= 0x300 )
        {
          if ( v21 )
          {
            if ( v21 != 512 )
              return nullptr;
            sub_F630(
              (__int64)"ABI: v2 syscall ABI\n",
              (__int64)a2,
              v22,
              v16,
              v17,
              v18,
              a3,
              a4,
              a5,
              a6,
              v19,
              v20,
              a9,
              a10,
              v24);
          }
          else
          {
            sub_F630(
              (__int64)"ABI: legacy syscall ABI\n",
              (__int64)a2,
              v22,
              v16,
              v17,
              v18,
              a3,
              a4,
              a5,
              a6,
              v19,
              v20,
              a9,
              a10,
              v24);
          }
          goto LABEL_12;
        }
        if ( v21 == 1024 )
        {
          sub_F630(
            (__int64)"ABI: v4 syscall ABI\n",
            (__int64)a2,
            v22,
            v16,
            v17,
            v18,
            a3,
            a4,
            a5,
            a6,
            v19,
            v20,
            a9,
            a10,
            v24);
LABEL_12:
          *a2 &= 0xFFFFF0FF;
          return nullptr;
        }
        break;
      default:
        return nullptr;
    }
  }
  return nullptr;
}
