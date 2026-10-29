unsigned __int64 __fastcall sub_81F740(unsigned __int64 a1)
{
  struct sigaction v2; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int64 v3; // [rsp+98h] [rbp-30h]

  v3 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(__m128i *)a1 = _mm_unpacklo_epi64((__m128i)a1, (__m128i)a1);
  *(__m128i *)(a1 + 24) = _mm_unpacklo_epi64((__m128i)(a1 + 24), (__m128i)(a1 + 24));
  *(_QWORD *)(a1 + 48) = qmutex_create();
  *(_QWORD *)(a1 + 56) = qmutex_create();
  *(_QWORD *)(a1 + 64) = 0;
  *(_BYTE *)(a1 + 200) = 0;
  sigemptyset((sigset_t *)(a1 + 72));
  sigaddset((sigset_t *)(a1 + 72), 12);
  memset(&v2.sa_mask, 0, 0x90u);
  v2.sa_handler = (__sighandler_t)nullsub_270;
  sigaction(12, &v2, nullptr);
  return v3 - __readfsqword(0x28u);
}

