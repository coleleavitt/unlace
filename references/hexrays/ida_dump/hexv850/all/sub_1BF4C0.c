__int64 __fastcall sub_1BF4C0(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int v6; // ecx
  int v7; // ebp
  __int64 *v8; // rbp
  __int64 v9; // rbx
  int v10; // r14d
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // r8d
  int v15; // ecx
  __int64 v16; // rdx
  int v17; // eax
  int v18; // [rsp+Ch] [rbp-5Ch]
  int v19; // [rsp+10h] [rbp-58h] BYREF
  __int64 v20; // [rsp+18h] [rbp-50h]
  int v21; // [rsp+20h] [rbp-48h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v3 = *(_DWORD *)a1;
  v22 = __readfsqword(0x28u);
  if ( v3 == 2 )
  {
    v8 = *(__int64 **)(a1 + 8);
    if ( !v8[1] )
    {
      if ( !under_debugger )
        sub_37CFE0(52115);
      BUG();
    }
    v9 = *v8;
    v19 = 0;
    copy_argloc(&v19, v9);
    v10 = v19;
    v21 = *(_DWORD *)(v9 + 16);
    if ( (unsigned __int64)v8[1] <= 1 )
    {
LABEL_20:
      v16 = *(_QWORD *)(a1 + 8);
      v4 = 1;
      *(_QWORD *)(a1 + 8) = v20;
      v17 = *(_DWORD *)a1;
      v20 = v16;
      v19 = v17;
      *(_DWORD *)a1 = v10;
    }
    else
    {
      if ( v19 == 3 )
      {
        v11 = 1;
        v12 = 1;
        while ( 1 )
        {
          v13 = *v8 + 24 * v12;
          v10 = *(_DWORD *)v13;
          if ( *(_DWORD *)v13 != 3 || *(unsigned __int16 *)(v13 + 16) != HIWORD(v21) + (unsigned __int16)v21 )
            break;
          v14 = *(unsigned __int16 *)(v13 + 8);
          if ( *(_BYTE *)(a2 + 145) )
          {
            v15 = *(unsigned __int16 *)(v13 + 18);
            if ( (unsigned __int16)v20 != v14 + v15 )
              break;
            v18 = *(unsigned __int16 *)(v13 + 8);
            HIWORD(v21) += v15;
            cleanup_argloc(&v19);
            v19 = 3;
            LODWORD(v20) = v18;
          }
          else
          {
            if ( v14 != (unsigned __int16)v20 + HIWORD(v21) )
              break;
            HIWORD(v21) += *(_WORD *)(v13 + 18);
          }
          v12 = ++v11;
          if ( v11 >= (unsigned __int64)v8[1] )
            goto LABEL_20;
        }
      }
      v4 = 0;
    }
    cleanup_argloc(&v19);
  }
  else
  {
    v4 = 0;
    if ( v3 == 4 )
    {
      v6 = *(_DWORD *)(a1 + 8);
      v7 = (unsigned __int16)v6;
      if ( (unsigned __int16)v6 + a3 / 2 == HIWORD(v6) )
      {
        v4 = 1;
        cleanup_argloc(a1);
        *(_DWORD *)a1 = 3;
        *(_DWORD *)(a1 + 8) = v7;
      }
    }
  }
  return v4;
}
