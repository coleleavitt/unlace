__int64 __fastcall sub_1F71A0(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4, __int64 a5, _QWORD *a6)
{
  _QWORD *v10; // rax
  unsigned __int64 i; // rbx
  __int64 v12; // r15
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  _DWORD *v16; // rcx
  _DWORD *v17; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  char v22; // r15

  if ( (unsigned __int8)sub_11CF10(a5, (__int64)a4, a4[22], nullptr, a5, (__int64)a6) )
  {
    v10 = *(_QWORD **)(a1 + 48);
    for ( i = *(int *)(a1 + 104); i < v10[1]; ++i )
    {
      v12 = *v10 + 104 * i;
      if ( a4 != (_DWORD *)v12 && (*(_BYTE *)(v12 + 25) & 0x10) == 0 )
      {
        if ( (unsigned __int8)sub_1BFD60(
                                (int *)(*v10 + 104 * i),
                                *(int *)(v12 + 88),
                                *(int **)(a5 + 8),
                                *(int *)(a5 + 4)) )
        {
          v15 = a3[1];
          v16 = (_DWORD *)(*a3 + 4 * v15);
          if ( (_DWORD *)*a3 == v16 )
            goto LABEL_15;
          v17 = (_DWORD *)*a3;
          while ( *v17 != (_DWORD)i )
          {
            if ( v16 == ++v17 )
              goto LABEL_15;
          }
          if ( v16 == v17 )
          {
LABEL_15:
            v19 = v15 + 1;
            if ( a3[2] < v19 )
            {
              v20 = qvector_reserve(a3, *a3, v19, 4);
              v21 = a3[1];
              *a3 = v20;
              *(_DWORD *)(v20 + 4 * v21) = i;
            }
            else
            {
              *v16 = i;
            }
            ++a3[1];
          }
          if ( !(unsigned __int8)sub_11CF10(a5, v12, *(_DWORD *)(v12 + 88), nullptr, v13, v14) )
          {
            sub_1BE390(v12, 0, 0);
            *(_DWORD *)(v12 + 24) |= 0x400u;
            return 0;
          }
        }
        v10 = *(_QWORD **)(a1 + 48);
      }
    }
    copy_argloc(a2, *(_QWORD *)(a5 + 8));
    return *(unsigned int *)(a5 + 4);
  }
  else
  {
    v22 = sub_1BE390((__int64)a4, 0, 0);
    if ( (unsigned __int8)sub_1BE390(*(_QWORD *)(a5 + 8), 0, 0) )
    {
      return sub_1F6B30(a1, a2, a3, a4, a5, a6);
    }
    else
    {
      if ( !v22 )
        sub_68620((__int64)"Expanding scattered variables is not implemented yet\n");
      return 0;
    }
  }
}
