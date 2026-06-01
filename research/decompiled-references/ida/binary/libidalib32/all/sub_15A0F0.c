__int64 __fastcall sub_15A0F0(__int64 a1, char **a2, int a3, int a4)
{
  int v4; // ebx
  char *v5; // rbp
  int v6; // r12d
  __int64 v7; // r13
  char *v8; // r14
  int v9; // r15d
  int v10; // r12d
  int v11; // kr00_4
  __int64 v12; // kr08_8
  int v13; // kr18_4
  int v15; // r15d
  char v16; // r8
  char v18; // [rsp+27h] [rbp-471h] BYREF
  char *v19; // [rsp+28h] [rbp-470h]
  __int64 v20; // [rsp+30h] [rbp-468h]
  __int128 v21; // [rsp+38h] [rbp-460h]
  char v22; // [rsp+50h] [rbp-448h] BYREF
  unsigned __int64 v23; // [rsp+458h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v11 = v9;
  v12 = v7;
  v13 = v6;
  v10 = a3;
  v15 = a4;
  switch ( a4 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
      goto LABEL_2;
    case 4:
      if ( a3 <= 20 )
      {
LABEL_2:
        v5 = *a2;
        if ( !a3 )
          return 1;
      }
      else
      {
        v5 = *a2;
      }
      v4 = 0;
      v8 = &v22;
      break;
    default:
      v10 = v13;
      a1 = v12;
      v15 = v11;
      if ( under_debugger )
        BUG();
      interr();
      goto LABEL_4;
  }
  while ( 1 )
  {
    v16 = *v5++;
    ++v4;
    v18 = v16;
    ++dword_253328;
    if ( v15 != 2 )
      goto LABEL_4;
    v20 = 0;
    v19 = &v18;
    v21 = 0;
    if ( (unsigned __int8)format_charlit() )
    {
      qstrncpy();
      if ( v20 )
      {
LABEL_9:
        *(_QWORD *)&v21 = 0;
        qfree();
      }
    }
    else if ( v20 )
    {
      goto LABEL_9;
    }
LABEL_4:
    sub_13B1E0();
    if ( (*(unsigned int (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 16LL))(a1, v8) )
      return 0;
    if ( v10 <= v4 )
      return 1;
  }
}

