__int64 __fastcall sub_847640(unsigned int *a1, char a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rax
  _BYTE *v6; // rax

  v2 = *((_QWORD *)a1 + 9);
  v3 = *(_QWORD *)(v2 + 8);
  v4 = v3 + 2;
  if ( (unsigned __int64)(v3 + 2) <= 0xFF0 )
  {
    v6 = (_BYTE *)(v2 + v3 + 16);
    *(_QWORD *)(v2 + 8) = v4;
    if ( v6 )
      goto LABEL_4;
    return *a1;
  }
  else
  {
    v5 = (_QWORD *)(**((__int64 (__fastcall ***)(__int64, _QWORD))a1 + 7))(
                     4096,
                     *(_QWORD *)(*((_QWORD *)a1 + 7) + 16LL));
    if ( v5 )
    {
      *v5 = *((_QWORD *)a1 + 9);
      *((_QWORD *)a1 + 9) = v5;
      v6 = v5 + 2;
      *((_QWORD *)v6 - 1) = 2;
LABEL_4:
      *v6 = 1;
      ++*((_QWORD *)a1 + 15);
      v6[1] = a2;
      return 0;
    }
    *a1 = 2;
    return 2;
  }
}

