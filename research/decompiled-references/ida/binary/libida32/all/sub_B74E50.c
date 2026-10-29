__int64 __fastcall sub_B74E50(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v6; // rbx

  if ( (**(_WORD **)(a1 + 8) & 0x1FF) == 0x6F )
  {
    v1 = *(_QWORD *)a1;
    v2 = (*(__int64 *)a1 >> 1) & 3;
    if ( v2 == 1 )
    {
      v4 = sub_B54370(v1 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v4 )
        return sub_EC8B80(v4);
    }
    else
    {
      v3 = 0;
      if ( v2 == 2 )
        v3 = *(_QWORD *)(*(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 56)
                       + 8LL * *(unsigned int *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 64)
                       - 8);
      v4 = sub_B54370(v3);
      if ( v4 )
        return sub_EC8B80(v4);
    }
    return 0;
  }
  else
  {
    v6 = *(unsigned int *)(a1 + 24);
    return (v6 << 32) | (unsigned int)sub_B74DB0(a1);
  }
}

