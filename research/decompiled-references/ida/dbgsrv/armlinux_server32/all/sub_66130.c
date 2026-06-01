/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_66130
// Address: 0x00066130

//----- (00066130) --------------------------------------------------------
void __fastcall sub_66130(int a1, int *a2)
{
  _DWORD *v4; // r6
  pthread_t v5; // r0
  int v6; // r0
  const char *v7; // r0
  int v8; // r0

  if ( (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 44) + 16))(*(_DWORD *)(a1 + 44)) )
  {
    v4 = sub_808A4(0xCu);
    *v4 = a1;
    v4[1] = a2;
    v4[2] = sub_79C38(nullptr, 0);
    v5 = sub_7A128((void *(*)(void *))sub_65CAC, v4);
    if ( v5 )
    {
      sub_65FBC(a1, (unsigned int)a2, v5);
      v6 = v4[2];
      if ( v6 )
        sub_79D84(v6);
    }
    else
    {
      v7 = (const char *)sub_71020(-1);
      sub_58320((int)a2, "Failed to create thread: %s; cannot handle session\n", v7);
      if ( a2 )
        (*(void (__fastcall **)(int *))(*a2 + 4))(a2);
      if ( v4 )
      {
        v8 = v4[2];
        *v4 = 0;
        v4[1] = 0;
        sub_79D3C(v8);
        sub_808A0(v4);
      }
    }
  }
  else
  {
    sub_65FBC(a1, (unsigned int)a2, 0);
    sub_65B98(a1, a2);
  }
}
