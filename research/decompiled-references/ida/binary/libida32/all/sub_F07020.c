void __fastcall sub_F07020(__int64 a1, __int64 a2)
{
  char v3; // r13
  _QWORD *v4; // r12
  __int64 v5; // rdi
  _BYTE *v6; // rax

  if ( *(_QWORD *)(a2 + 40) )
  {
    v3 = *(_BYTE *)(a1 + 1104);
    v4 = *(_QWORD **)(a1 + 1096);
    v5 = (__int64)v4;
    if ( v3 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD))(*v4 + 24LL))(v4, 6, 1, 0);
      v5 = *(_QWORD *)(a1 + 1096);
      v6 = *(_BYTE **)(v5 + 32);
      if ( (unsigned __int64)v6 < *(_QWORD *)(v5 + 24) )
        goto LABEL_4;
    }
    else
    {
      v6 = (_BYTE *)v4[4];
      if ( (unsigned __int64)v6 < v4[3] )
      {
LABEL_4:
        *(_QWORD *)(v5 + 32) = v6 + 1;
        *v6 = 32;
        goto LABEL_5;
      }
    }
    v5 = sub_2257CD0(v5, 32);
LABEL_5:
    sub_B62620(v5, *(_QWORD *)(a2 + 40));
    if ( v3 )
      (*(void (__fastcall **)(_QWORD *))(*v4 + 32LL))(v4);
  }
}

