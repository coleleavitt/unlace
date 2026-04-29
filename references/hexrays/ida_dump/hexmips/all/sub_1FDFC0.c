__int64 __fastcall sub_1FDFC0(__int64 a1, unsigned int a2, unsigned __int64 a3, int a4, unsigned __int8 a5)
{
  unsigned __int8 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // ebp
  int v12; // eax
  int *v13; // rbx
  int v14; // eax
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 *v18; // rdi
  __int64 v19; // rdx
  _QWORD *v20; // rax
  int v21; // r9d
  int v22; // edx
  __int64 v23; // r14
  __int64 v24; // rdi
  __int64 *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 *p_tinfo_property; // [rsp+0h] [rbp-A8h]
  char v30; // [rsp+0h] [rbp-A8h]
  _QWORD *v31; // [rsp+8h] [rbp-A0h]
  int v32; // [rsp+10h] [rbp-98h]
  char v33; // [rsp+16h] [rbp-92h]
  unsigned __int8 v34; // [rsp+17h] [rbp-91h]
  int v35; // [rsp+18h] [rbp-90h]
  int v36; // [rsp+1Ch] [rbp-8Ch]
  char v37; // [rsp+20h] [rbp-88h]
  __int64 v38; // [rsp+28h] [rbp-80h] BYREF
  __int64 tinfo_property; // [rsp+30h] [rbp-78h] BYREF
  __int128 v40; // [rsp+38h] [rbp-70h]
  __int64 v41; // [rsp+48h] [rbp-60h]
  int v42; // [rsp+50h] [rbp-58h]
  unsigned __int64 v43; // [rsp+58h] [rbp-50h]
  __int64 v44; // [rsp+60h] [rbp-48h]
  unsigned __int64 v45; // [rsp+68h] [rbp-40h]

  v7 = a4;
  v8 = *(_QWORD *)(a1 + 56);
  v35 = a4;
  v34 = a5;
  v45 = __readfsqword(0x28u);
  if ( a5 || (v9 = *(int *)(a3 + 44), (_DWORD)v9 == -1) )
  {
    if ( a2 >= *(_DWORD *)(v8 + 64) )
      sub_1FCB00();
    if ( *(_BYTE *)(a3 + 32) == 5
      && (unsigned __int8)sub_1EC390(
                            *(_QWORD *)(*(_QWORD *)(v8 + 528) + 8LL * a2),
                            *(_QWORD *)(a3 + 24),
                            *(int *)(a3 + 40)) )
    {
      return (unsigned int)-1;
    }
    else
    {
      v12 = *(_DWORD *)(a1 + 44);
      if ( (_BYTE)v35 )
      {
        v23 = **(_QWORD **)(a1 + 64) + 104LL * v12;
        if ( *(_QWORD *)(v23 + 16) == -1 )
        {
          v38 = 0;
          v24 = *(_QWORD *)(v23 + 80);
          if ( !(_BYTE)v24
            || (v24 & 0xE) == 0 && (v24 & 0x30) != 0
            || (tinfo_property = get_tinfo_property(v24, 9),
                v30 = get_tinfo_property(tinfo_property, 2),
                clear_tinfo_t(&tinfo_property),
                (v30 & 0x3F) == 0x30) )
          {
            v25 = &v38;
          }
          else
          {
            v25 = nullptr;
          }
          v26 = *(_QWORD *)(a1 + 56);
          if ( a2 >= *(_DWORD *)(v26 + 64) )
            sub_1FCB00();
          v27 = sub_1FDC70(*(_QWORD *)(*(_QWORD *)(v26 + 528) + 8LL * a2), a3, (__int64)v25, nullptr);
          v28 = v38;
          *(_QWORD *)(v23 + 16) = v27;
          if ( (_BYTE)v28 && *(_DWORD *)(v23 + 88) == get_tinfo_size(0, v28, 0) )
            sub_1EB070(v23, *(_QWORD *)(*(_QWORD *)(a1 + 56) + 1504LL), &v38, 0);
          clear_tinfo_t(&v38);
          v12 = *(_DWORD *)(a1 + 44);
        }
      }
      v10 = *(_DWORD *)(a3 + 40);
      v13 = *(int **)a3;
      *(_DWORD *)(a3 + 44) = v12;
      if ( 4LL * *(_QWORD *)(a3 + 8) )
      {
        p_tinfo_property = &tinfo_property;
        v33 = v34 ^ 1;
        v36 = v7 ^ 1;
        do
        {
          v15 = *(__int64 **)(a1 + 80);
          if ( !v7 )
            v15 = *(__int64 **)(a1 + 72);
          v16 = *v13;
          v17 = *v15;
          v43 = 0xFFFFFFFF00000001LL;
          LOBYTE(v44) = 1;
          v18 = (unsigned __int64 *)(v17 + 24 * v16);
          v19 = *(_QWORD *)(a3 + 24);
          LOBYTE(v17) = *(_BYTE *)(a3 + 32);
          tinfo_property = 0;
          v40 = 0;
          v41 = v19;
          LOBYTE(v42) = v17;
          v20 = sub_100BF0(v18, (__int64)p_tinfo_property);
          if ( tinfo_property )
          {
            v31 = v20;
            *(_QWORD *)&v40 = 0;
            qfree(tinfo_property);
            v20 = v31;
          }
          if ( v20 )
          {
            v22 = *((_DWORD *)v20 + 11);
            if ( v22 != *(_DWORD *)(a1 + 44) )
            {
              if ( !v33 || v22 == -1 )
              {
                v14 = sub_1FDFC0(
                        a1,
                        *v13,
                        (_DWORD)v20,
                        v36,
                        v34,
                        v21,
                        (_DWORD)p_tinfo_property,
                        (_DWORD)v31,
                        v32,
                        v35,
                        v37,
                        v38,
                        tinfo_property,
                        v40,
                        DWORD2(v40),
                        v41,
                        v42,
                        v43,
                        v44);
                if ( v14 < 0 )
                {
                  sub_1FDF70((_QWORD *)a1, a3, v35);
                  return (unsigned int)-1;
                }
                if ( v10 < v14 )
                  v10 = v14;
              }
              else if ( !(unsigned __int8)sub_1EA1E0(*(unsigned __int8 **)(a1 + 56)) )
              {
                if ( !under_debugger )
                  sub_37E160(50337);
                goto LABEL_53;
              }
            }
          }
          else if ( !(unsigned __int8)sub_1EA1E0(*(unsigned __int8 **)(a1 + 56)) )
          {
            if ( !under_debugger )
              sub_37E160(50336);
LABEL_53:
            BUG();
          }
          ++v13;
        }
        while ( v13 != (int *)(*(_QWORD *)a3 + 4LL * *(_QWORD *)(a3 + 8)) );
      }
    }
  }
  else if ( (_DWORD)v9 == *(_DWORD *)(a1 + 44)
         && ((*(_BYTE *)v8 & 0x40) != 0 || (*(_BYTE *)(**(_QWORD **)(a1 + 64) + 104 * v9 + 27) & 2) != 0) )
  {
    return *(unsigned int *)(a3 + 40);
  }
  else
  {
    if ( !(unsigned __int8)sub_1EA1E0((unsigned __int8 *)v8) )
    {
      if ( !under_debugger )
        sub_37E160(50335);
      goto LABEL_53;
    }
    return 0;
  }
  return (unsigned int)v10;
}
