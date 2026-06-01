__int64 __fastcall sub_448470(__int64 a1)
{
  __int64 v1; // rax
  _DWORD *v3; // rax
  _DWORD *v4; // rbx
  void *v5; // rax

  v1 = sub_406BD0(a1, (__int64)"tclBgError", nullptr);
  if ( !v1 )
  {
    v3 = (_DWORD *)sub_496740(a1, "tclBgError");
    *v3 = 0;
    v4 = v3;
    v5 = (void *)sub_40FB00(15);
    *((_QWORD *)v4 + 1) = v5;
    qmemcpy(v5, "::tcl::Bgerror", 14);
    *(_BYTE *)(*((_QWORD *)v4 + 1) + 14LL) = 0;
    v4[4] = 14;
    *((_QWORD *)v4 + 3) = 0;
    sub_4483B0(a1, v4);
    v1 = sub_406BD0(a1, (__int64)"tclBgError", nullptr);
  }
  return *(_QWORD *)(v1 + 8);
}

