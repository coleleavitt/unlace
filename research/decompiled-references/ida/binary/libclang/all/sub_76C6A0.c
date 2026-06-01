__int64 __fastcall sub_76C6A0(__int64 a1)
{
  _DWORD **v1; // rdx
  unsigned int v2; // ecx
  _DWORD **i; // rsi
  _DWORD *v4; // rax

  v1 = *(_DWORD ***)(a1 + 16);
  v2 = 0;
  for ( i = (_DWORD **)((char *)v1 + ((*(_QWORD *)(a1 + 24) - (_QWORD)v1) & 0x7FFFFFFF8LL));
        v1 != i;
        v2 |= (*v4 >> 14) & 0x1F )
  {
    v4 = *v1++;
  }
  return v2;
}

