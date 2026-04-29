__int64 __fastcall sub_880A0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  _DWORD *v3; // rbx
  int v4; // eax
  unsigned int v5; // r12d
  void (__fastcall *v6)(_QWORD *); // rdx
  void (__fastcall *v7)(_QWORD *); // rax
  _QWORD *v8; // r13
  __int64 v9; // rbp
  void *v10; // rdi
  __int64 v11; // rbp
  _QWORD *v12; // r13
  __int64 v13; // rdi
  __int64 v14; // rdi

  v2 = a2[31];
  if ( !v2 )
  {
    v2 = sub_87C20(*(_QWORD **)(*a2 + 16LL), *(_QWORD *)(*a2 + 24LL));
    a2[31] = v2;
  }
  v3 = *(_DWORD **)(v2 + 216);
  if ( v3 )
  {
    v4 = v3[2];
    v5 = 16;
    if ( v3[31] == 1 )
    {
      v5 = 48;
      if ( !v4 )
      {
LABEL_6:
        v6 = **(void (__fastcall ***)(_QWORD *))v3;
        if ( v6 == sub_15E30 )
        {
          v7 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v3 + 16LL);
          if ( v7 == sub_15D70 )
          {
            v8 = *((_QWORD **)v3 + 16);
            *(_QWORD *)v3 = &off_C71D8;
            if ( v8 )
            {
              v9 = v8[2];
              while ( v9 )
              {
                sub_80300(*(_QWORD **)(v9 + 24));
                v10 = (void *)v9;
                v9 = *(_QWORD *)(v9 + 16);
                operator delete(v10, 0x30u);
              }
              operator delete(v8, 0x30u);
            }
            v11 = *((_QWORD *)v3 + 19);
            while ( v11 )
            {
              v12 = (_QWORD *)v11;
              sub_80A30(*(_QWORD **)(v11 + 24));
              v13 = *(_QWORD *)(v11 + 32);
              v11 = *(_QWORD *)(v11 + 16);
              if ( v13 )
              {
                v12[5] = 0;
                qfree(v13);
              }
              operator delete(v12, 0x48u);
            }
            v14 = *((_QWORD *)v3 + 12);
            if ( v14 )
            {
              *((_QWORD *)v3 + 13) = 0;
              qfree(v14);
            }
            operator delete(v3, 0xC0u);
          }
          else
          {
            v7(v3);
          }
        }
        else
        {
          v6(v3);
        }
      }
    }
    else if ( !v4 )
    {
      goto LABEL_6;
    }
    return v5;
  }
  return 16;
}
