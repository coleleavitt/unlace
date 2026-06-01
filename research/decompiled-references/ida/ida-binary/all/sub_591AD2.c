int __fastcall sub_591AD2(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6, int a7)
{
  __int64 v7; // rax
  void *v9; // rbx
  _QWORD v12[3]; // [rsp+38h] [rbp-18h] BYREF

  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = a4;
  *(_QWORD *)(a1 + 16) = a5;
  sub_593846(a1 + 24, 0);
  sub_595D46(a1 + 32, a2);
  *(_QWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 128) = -1;
  *(_DWORD *)(a1 + 132) = -1;
  sub_593898(a1 + 136);
  sub_5938F8(a1 + 152);
  if ( a7 >= 0 )
  {
    v7 = sub_5AE938((unsigned int)a7);
    sub_5937E0(a1 + 24, v7);
  }
  if ( (unsigned __int8)sub_59364C(a1) != 1
    && (unsigned __int8)sub_593278(a1 + 32) != 1
    && (unsigned __int8)sub_5932B2(a1 + 32) != 1 )
  {
    sub_595F5E(a1 + 32);
  }
  pthread_mutex_lock(&mutex);
  memset(&unk_8D2A40, 0, 0x630u);
  if ( !qword_8D29E0 )
  {
    v9 = (void *)operator new(0x18u);
    sub_593958(v9);
    qword_8D29E0 = v9;
  }
  if ( a6 )
  {
    sub_59191F();
    sub_591E1C();
  }
  v12[0] = a1;
  sub_593974(qword_8D29E0, v12);
  return pthread_mutex_unlock(&mutex);
}
