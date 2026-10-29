void __fastcall sub_9536B0(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  __int64 (__fastcall *v3)(); // rax

  if ( *((_BYTE *)a1 + 12) )
  {
    ++*((_DWORD *)a1 + 2);
  }
  else
  {
    v1 = *a1;
    v2 = *(_QWORD *)(*a1 + 1192);
    v3 = *(__int64 (__fastcall **)())(*(_QWORD *)v2 + 152LL);
    if ( v3 == sub_955F70 )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 32) + 24LL))(*(_QWORD *)(v2 + 32));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 40) + 24LL))(*(_QWORD *)(v2 + 40));
      sub_AC8640(*(_QWORD *)(v2 + 48));
    }
    else
    {
      ((void (__fastcall *)(_QWORD))v3)(*(_QWORD *)(*a1 + 1192));
    }
    sub_ADBDA0(v1 + 24);
  }
}

