unsigned __int64 __fastcall sub_557B80(__int64 a1, unsigned int a2, char a3)
{
  int v3; // edx
  __int64 v4; // rax
  __int64 v5; // rdx
  _BYTE _0[136]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars88; // [rsp+88h] [rbp+88h]

  vars88 = __readfsqword(0x28u);
  btoa32(_0, 136, a2, (unsigned int)a3);
  if ( (*(_BYTE *)(a1 + 146) & 1) != 0 )
  {
    v3 = *(_DWORD *)(a1 + 56);
    v4 = *(_QWORD *)(a1 + 528);
    if ( v3 )
    {
LABEL_3:
      v5 = 5 * (unsigned int)(v3 == 2) + 13;
      goto LABEL_4;
    }
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 56);
    LODWORD(v4) = *(_DWORD *)(a1 + 60);
    if ( v3 )
      goto LABEL_3;
  }
  v5 = 31;
  if ( (~BYTE1(v4) & 6) == 0 )
    v5 = 12;
LABEL_4:
  (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, _0, v5);
  return vars88 - __readfsqword(0x28u);
}

