unsigned __int64 __fastcall sub_1F15160(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  _DWORD *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  if ( a3 > 0x1007 )
  {
    v3 = (_DWORD *)a2;
    if ( *(_QWORD *)(a2 + 856) )
    {
      v7 = a3;
      sub_1EDF870((__int64)a1, a2);
      v4 = (unsigned int)v7;
      v5 = HIDWORD(v7);
      if ( HIDWORD(v7) )
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
LABEL_5:
        a3 = v4 | ((unsigned __int64)(unsigned int)(*v3 + 1) << 32);
        return sub_1F0CF20(a1, a3);
      }
    }
    v4 -= 4104;
    goto LABEL_5;
  }
  return sub_1F0CF20(a1, a3);
}
