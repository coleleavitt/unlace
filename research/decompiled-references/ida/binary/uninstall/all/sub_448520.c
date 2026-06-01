void __fastcall sub_448520(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // r12
  _DWORD *v3; // rax
  _DWORD *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbx

  if ( a2 )
  {
    v2 = (_QWORD *)sub_40FB00(24);
    v3 = (_DWORD *)sub_48B5D0(a1);
    ++*v3;
    *v2 = v3;
    v4 = (_DWORD *)sub_48C5F0(a1, a2);
    ++*v4;
    v2[1] = v4;
    v2[2] = 0;
    sub_448470(a1);
    v5 = sub_406BD0(a1, (__int64)"tclBgError", nullptr);
    v6 = v5;
    if ( *(_QWORD *)(v5 + 16) )
    {
      *(_QWORD *)(*(_QWORD *)(v5 + 24) + 16LL) = v2;
    }
    else
    {
      *(_QWORD *)(v5 + 16) = v2;
      sub_497DA0(sub_4479B0, v5);
    }
    *(_QWORD *)(v6 + 24) = v2;
    sub_48B350(a1);
  }
}

