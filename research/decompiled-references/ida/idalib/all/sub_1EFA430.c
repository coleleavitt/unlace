unsigned __int64 __fastcall sub_1EFA430(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _DWORD *v3; // rbx
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx

  if ( a3 > 0x1007 )
  {
    v3 = (_DWORD *)a2;
    if ( *(_QWORD *)(a2 + 856) )
    {
      sub_1EDF870(a1, a2);
      v4 = (unsigned int)a3;
      v5 = HIDWORD(a3);
      if ( HIDWORD(a3) )
        goto LABEL_4;
    }
    else
    {
      v4 = (unsigned int)a3;
      v5 = HIDWORD(a3);
      if ( v5 )
      {
LABEL_4:
        v3 = *(_DWORD **)(*(_QWORD *)(a2 + 3320) + 8LL * (unsigned int)(v5 - 1));
        return v4 | ((unsigned __int64)(unsigned int)(*v3 + 1) << 32);
      }
    }
    v4 -= 4104;
    return v4 | ((unsigned __int64)(unsigned int)(*v3 + 1) << 32);
  }
  return a3;
}
