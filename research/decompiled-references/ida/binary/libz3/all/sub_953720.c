void __fastcall sub_953720(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v3; // r12
  __int64 (__fastcall *v4)(); // rax

  if ( *((_BYTE *)a1 + 12) )
  {
    *((_DWORD *)a1 + 2) -= a2;
  }
  else
  {
    v2 = *a1;
    v3 = *(_QWORD *)(*a1 + 1192);
    v4 = *(__int64 (__fastcall **)())(*(_QWORD *)v3 + 160LL);
    if ( v4 == sub_955F30 )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 32) + 32LL))(*(_QWORD *)(v3 + 32));
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v3 + 40) + 32LL))(*(_QWORD *)(v3 + 40), a2);
      sub_ACA400(*(_QWORD *)(v3 + 48), a2);
    }
    else
    {
      ((void (__fastcall *)(_QWORD))v4)(*(_QWORD *)(*a1 + 1192));
    }
    sub_ADB4C0(v2 + 24, a2);
  }
}

