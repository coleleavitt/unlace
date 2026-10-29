__int64 __fastcall sub_7DCB10(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  char *v4; // rax
  __int64 v5; // rdx
  unsigned int v7; // eax
  _DWORD *v8; // rax
  __int64 v9; // rdx
  __int64 *v10; // rbx
  __int64 v11; // r13

  v2 = sub_7E4F00(a1);
  if ( !v2 )
    v2 = sub_7E67D0(a1, a2, 0);
  v3 = *(unsigned int *)(a1 + 12);
  v4 = (char *)(v2 + 88);
  v5 = (unsigned int)(*(int *)(v2 + 88) >> 8);
  if ( (_DWORD)v5 == -1 )
    goto LABEL_9;
  while ( 1 )
  {
    v5 = (unsigned int)*v4;
    if ( (_DWORD)v5 == (_DWORD)v3 )
      break;
    v4 = *((char **)v4 + 1);
    if ( !v4 )
      goto LABEL_9;
  }
  if ( *(int *)v4 >> 8 == -1 )
  {
LABEL_9:
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 528LL))(a1, v2, v5, v3);
    sub_13D7950(*(_QWORD *)(a1 + 80) + 1592LL, v2, v7, *(unsigned int *)(a1 + 12));
    if ( !*(_WORD *)(a2 + 4) )
    {
      v8 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( v8 )
      {
        v9 = *(_QWORD *)(a1 + 120);
        if ( *(_DWORD *)(v9 + 8) == *v8 && !v8[1] && (unsigned __int8)sub_162B070(*(_QWORD *)(v9 + 16)) )
        {
          v10 = (__int64 *)sub_186B270(0x20u);
          v11 = sub_186B270(0x28u);
          sub_162B3B0(v11, *(_QWORD *)(a1 + 120), a2);
          *v10 = v11;
          v10[1] = 0;
          v10[2] = 0;
          v10[3] = 0;
          sub_7DC960(a1, (__int64)v10);
        }
      }
    }
  }
  return 1;
}

