__int64 __fastcall sub_443480(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v6; // edx
  __int64 v8; // rax
  __int64 v9; // r14
  int v10; // eax
  int v11; // r15d
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  bool v15; // zf
  __int64 v16; // rax
  __int64 *v17; // rdi
  int v18; // eax
  __int64 v19; // rdx
  int v20; // ecx
  unsigned int v21; // ebx
  int v22; // r8d
  int v23; // r9d
  int *v24; // r14
  int v25; // r15d
  int v26; // ecx
  int *v27; // rax
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rax
  __int64 *v31; // rdi
  __int64 v32; // [rsp+0h] [rbp-48h]
  int *v33; // [rsp+8h] [rbp-40h] BYREF
  int v34; // [rsp+14h] [rbp-34h] BYREF

  if ( a3 <= 4 || (a3 & 1) == 0 )
  {
    sub_458930(a2, 1, a4, "varName key varName ?key varName ...? script");
    return 1;
  }
  v8 = sub_4A43A0(a2, *(_QWORD *)(a4 + 8), 0, 512);
  v9 = v8;
  v6 = 1;
  if ( v8 )
  {
    v10 = sub_4408B0(a2, v8, &v34);
    v6 = 1;
    if ( !v10 )
    {
      v11 = 2;
      v12 = *(_DWORD *)v9 + 1;
      if ( a3 > 4 )
      {
        *(_DWORD *)v9 = v12;
        while ( !(unsigned int)sub_4406D0(a2, v9, *(_QWORD *)(a4 + 8LL * v11), &v33) )
        {
          if ( v33 )
          {
            if ( !sub_4A4160(a2, *(_QWORD *)(a4 + 8LL * v11 + 8), 0, v33, 512) )
              break;
          }
          else
          {
            v13 = sub_47B3B0(*(_QWORD *)(a4 + 8LL * v11 + 8));
            sub_4A3FE0(a2, v13, 0, 0);
          }
          v11 += 2;
          if ( v11 + 2 >= a3 )
          {
            v12 = *(_DWORD *)v9;
            goto LABEL_23;
          }
        }
        v14 = *(_DWORD *)v9 - 1;
        v15 = *(_DWORD *)v9 == 1;
        *(_DWORD *)v9 = v14;
        if ( v14 < 0 || v15 )
        {
          v16 = *(_QWORD *)(v9 + 24);
          if ( v16 && *(_QWORD *)(v16 + 8) )
          {
            sub_47B120(v9);
          }
          else
          {
            v17 = *(__int64 **)(v9 + 8);
            if ( v17 && v17 != off_656088 )
              Tcl_Free((__int64)v17);
            *(_DWORD *)(v9 + 16) = -1;
            sub_496830(v9);
          }
        }
        return 1;
      }
LABEL_23:
      v18 = v12 - 1;
      *(_DWORD *)v9 = v18;
      if ( v18 <= 0 )
      {
        v30 = *(_QWORD *)(v9 + 24);
        if ( v30 && *(_QWORD *)(v30 + 8) )
        {
          sub_47B120(v9);
        }
        else
        {
          v31 = *(__int64 **)(v9 + 8);
          if ( v31 && v31 != off_656088 )
            Tcl_Free((__int64)v31);
          *(_DWORD *)(v9 + 16) = -1;
          sub_496830(v9);
        }
      }
      v21 = sub_40B720(a2, *(_QWORD *)(a4 + 8LL * a3 - 8), 0, *(_QWORD **)(a2 + 952), a3 - 1);
      if ( v21 == 1 )
        sub_40BD40(a2, (__int64)"\n    (body of \"dict update\")", v19, v20, v22, v23);
      v24 = (int *)sub_4A43A0(a2, *(_QWORD *)(a4 + 8), 0, 0);
      v6 = v21;
      if ( v24 )
      {
        v32 = sub_48B7B0(a2, v21);
        if ( !(unsigned int)sub_4408B0(a2, (__int64)v24, &v34) )
        {
          if ( *v24 > 1 )
            v24 = (int *)sub_47B2A0(v24);
          v25 = 2;
          if ( a3 > 4 )
          {
            do
            {
              v27 = (int *)sub_4A43A0(a2, *(_QWORD *)(a4 + 8LL * v25 + 8), 0, 0);
              v33 = v27;
              if ( v27 )
              {
                if ( v27 == v24 )
                  v27 = (int *)sub_47B2A0(v24);
                sub_440560(a2, (__int64)v24, *(_QWORD *)(a4 + 8LL * v25), v27, v28, v29);
              }
              else
              {
                sub_440760(a2, (__int64)v24, *(_QWORD *)(a4 + 8LL * v25), v26, v28, v29);
              }
              v25 += 2;
            }
            while ( v25 + 2 < a3 );
          }
          if ( sub_4A4160(a2, *(_QWORD *)(a4 + 8), 0, v24, 512) )
            return (unsigned int)sub_48B090(a2, v32);
        }
        sub_48AE70(v32);
        return 1;
      }
    }
  }
  return v6;
}

