/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65FB0
// Address: 0x00065FB0

//----- (00065FB0) --------------------------------------------------------
void __fastcall sub_65FB0(int a1, int *a2)
{
  _DWORD *v4; // r6
  pthread_t v5; // r0
  int v6; // r0
  const char *v7; // r0
  int v8; // r0

  if ( (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 44) + 16))(*(_DWORD *)(a1 + 44)) )
  {
    v4 = sub_805CC(0xCu);
    *v4 = a1;
    v4[1] = a2;
    v4[2] = sub_79AD0(nullptr, 0);
    v5 = sub_79FC0((void *(*)(void *))sub_65B2C, v4);
    if ( v5 )
    {
      sub_65E3C(a1, (unsigned int)a2, v5);
      v6 = v4[2];
      if ( v6 )
        sub_79C1C(v6);
    }
    else
    {
      v7 = (const char *)sub_70EB4(-1);
      sub_5819C((int)a2, "Failed to create thread: %s; cannot handle session\n", v7);
      if ( a2 )
        (*(void (__fastcall **)(int *))(*a2 + 4))(a2);
      if ( v4 )
      {
        v8 = v4[2];
        *v4 = 0;
        v4[1] = 0;
        sub_79BD4(v8);
        sub_8121C(v4);
      }
    }
  }
  else
  {
    sub_65E3C(a1, (unsigned int)a2, 0);
    sub_65A18(a1, a2);
  }
}
