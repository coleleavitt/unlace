__int64 __fastcall sub_41FEF0(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rax

  v2 = *(_QWORD **)(*(_QWORD *)a1 + 1688LL);
  if ( *(_BYTE *)(*(_QWORD *)(*v2 + 1480LL) + 601LL) && (v3 = sub_41F560(v2 + 5, a2)) != nullptr )
    return v3[2];
  else
    return 0;
}

