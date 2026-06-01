_DWORD *__fastcall sub_409BC0(__int64 a1, int a2, int a3)
{
  int v3; // eax
  __int64 v4; // rdx
  _DWORD *v5; // rax
  _DWORD *v6; // rbx

  v3 = sub_409B90(a1, a2, a3);
  v4 = 0;
  if ( !v3 )
  {
    v5 = (_DWORD *)sub_48B5D0(a1);
    ++*v5;
    v6 = v5;
    sub_48B350(a1);
    return v6;
  }
  return (_DWORD *)v4;
}

