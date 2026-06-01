__int64 __fastcall sub_41CC30(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v6; // edx
  __int64 v8; // rdi
  __int64 v9; // r12
  int v10; // ebp
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // r12
  int v14; // esi
  __int64 v15; // rax
  _BYTE *v16; // r13
  int v17; // ebp
  int v18; // esi
  unsigned __int64 v19; // r12
  unsigned __int16 v20; // ax
  _BYTE *v21; // rbx
  unsigned __int16 v22; // [rsp+6h] [rbp-32h] BYREF
  int v23; // [rsp+8h] [rbp-30h] BYREF
  int v24; // [rsp+Ch] [rbp-2Ch] BYREF

  if ( a3 == 3 )
  {
    v8 = *(_QWORD *)(a4 + 8);
    if ( *(_QWORD *)(v8 + 8) )
    {
      v9 = *(_QWORD *)(v8 + 8);
      v24 = *(_DWORD *)(v8 + 16);
    }
    else
    {
      v9 = sub_47ACD0(v8, &v24);
    }
    v10 = sub_49BD60(v9);
    v11 = sub_49FAC0(a2, *(_QWORD *)(a4 + 16), (unsigned int)(v10 - 1), &v23);
    v6 = 1;
    if ( !v11 )
    {
      v12 = *(_QWORD *)(a4 + 8);
      if ( *(_QWORD *)(v12 + 8) )
      {
        v13 = *(_QWORD *)(v12 + 8);
        v24 = *(_DWORD *)(v12 + 16);
      }
      else
      {
        v13 = sub_47ACD0(v12, &v24);
      }
      v14 = v23;
      if ( v23 < 0 )
      {
        v14 = 0;
        v23 = 0;
      }
      if ( v14 < v10 )
      {
        v16 = (_BYTE *)sub_49BFA0(v13);
        v17 = v23;
        v18 = v23;
        v19 = v24 + v13;
        if ( (unsigned __int64)v16 < v19 )
        {
          do
          {
            LOBYTE(v20) = *v16;
            if ( *v16 <= 0xBFu )
            {
              v20 = (char)v20;
              v21 = v16 + 1;
              v22 = (char)v20;
            }
            else
            {
              v21 = &v16[(int)sub_49BBC0(v16, &v22)];
              v20 = v22;
            }
            v16 = v21;
            if ( !(unsigned int)Tcl_UniCharIsWordChar(v20) )
              break;
            ++v17;
          }
          while ( (unsigned __int64)v21 < v19 );
          v18 = v23;
        }
        v10 = (v17 == v18) + v17;
      }
      v15 = sub_47BD00((unsigned int)v10);
      sub_48AFD0(a2, v15);
      return 0;
    }
  }
  else
  {
    sub_458930(a2, 1, a4, "string index");
    return 1;
  }
  return v6;
}

