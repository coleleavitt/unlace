__int64 __fastcall sub_35B920(_QWORD *a1, unsigned int a2)
{
  unsigned int v2; // ebp
  size_t v4; // rax
  char v5[136]; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int64 v6; // [rsp+88h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  if ( *((_BYTE *)a1 + 16) && (v2 = sub_35B1B0(a1), (_BYTE)v2) )
  {
    btoa32(v5, 136, a2, 0);
    (*(void (__fastcall **)(_QWORD, char *, _QWORD))(*(_QWORD *)*a1 + 56LL))(*a1, v5, 0);
    v4 = strlen(v5);
    *((_BYTE *)a1 + 17) = 1;
    a1[3] += v4;
  }
  else
  {
    return 0;
  }
  return v2;
}

