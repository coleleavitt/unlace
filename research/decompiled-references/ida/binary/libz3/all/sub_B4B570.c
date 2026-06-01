__int64 __fastcall sub_B4B570(__int64 a1, unsigned int *a2)
{
  __int64 v3; // r13
  unsigned int *v4; // r12
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int8 v10; // al
  __int64 v11; // r9
  int v12; // eax
  _DWORD *v13; // rdx
  int v14; // eax
  _DWORD *v15; // rdx
  __int64 v16; // r12
  int v17; // eax
  _DWORD *v18; // rdx
  _QWORD *v19; // r13
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 *v24; // rax
  int v25; // eax
  _DWORD *v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r12
  unsigned int v33; // eax
  int v34; // eax
  _DWORD *v35; // rdx
  unsigned int v36; // ebp
  unsigned int v37; // r12d
  int v38; // eax
  _DWORD *v39; // rdx
  unsigned int v40; // eax
  __int64 v41; // [rsp+8h] [rbp-70h]
  __int64 v42; // [rsp+10h] [rbp-68h]
  __int64 v43; // [rsp+18h] [rbp-60h]
  unsigned int *v44; // [rsp+18h] [rbp-60h]
  unsigned int v45; // [rsp+24h] [rbp-54h]
  __int64 v46; // [rsp+28h] [rbp-50h]
  int v47[2]; // [rsp+38h] [rbp-40h] BYREF

  sub_9671F0(a1);
  v3 = a2[6];
  if ( (_DWORD)v3 )
  {
    v4 = a2;
    do
    {
      v5 = *(_QWORD *)(a1 + 16);
      sub_15D2CB0(*(_QWORD *)(a1 + 24), a2);
      v4 += 2;
      sub_B6F780(v5);
    }
    while ( &a2[2 * (unsigned int)v3] != v4 );
  }
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(v6 + 8656);
  if ( !v7 || (v8 = *a2, (unsigned int)v8 >= *(_DWORD *)(v7 - 4)) || !*(_QWORD *)(v7 + 8 * v8) )
  {
    v10 = sub_15D2CB0(*(_QWORD *)(a1 + 24), a2);
    v42 = sub_B68280(v6, a2, 0, v10, 1, v11);
    if ( (unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 24), a2) )
    {
      v37 = sub_B67520(*(_QWORD *)(a1 + 16), a2);
      sub_8F1CE0(*(_QWORD *)(a1 + 16), v37, *(_DWORD *)(a1 + 8));
      sub_B66DE0(*(_QWORD *)(a1 + 16), v37, 1);
    }
    v12 = sub_15F0200(a1 + 56);
    if ( !*((_WORD *)a2 + 2)
      && ((v13 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL)) != nullptr && *v13 == v12 && !v13[1]
       || (v14 = sub_15F0200(a1 + 56), !*((_WORD *)a2 + 2))
       && (v15 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL)) != nullptr
       && v14 == *v15
       && v15[1] == 4) )
    {
      if ( (_DWORD)v3 )
      {
        v16 = v42;
        v41 = v42 + 8 * v3;
        do
        {
          while ( 1 )
          {
            v19 = *(_QWORD **)(v16 + 112);
            v20 = sub_15D1F10(*v19);
            v21 = *(_QWORD *)(v20 + 24);
            if ( v21 && *(_DWORD *)(a1 + 80) == *(_DWORD *)v21 && !*(_DWORD *)(v21 + 4) )
            {
              v22 = 0xFFFFFFFF0LL;
              v23 = *(_QWORD *)(v21 + 8);
              if ( v23 )
                v22 = 16LL * (unsigned int)(*(_DWORD *)(v23 - 4) - 1);
              v24 = (__int64 *)(v22 + v23);
              if ( *((_BYTE *)v24 + 8) != 1 )
                sub_DBF6E(0);
              v43 = *v24;
              v25 = sub_15F0200(a1 + 56);
              v26 = *(_DWORD **)(v43 + 24);
              if ( v26 && v25 == *v26 && !v26[1] )
              {
                v27 = *(_QWORD *)(a1 + 88);
                v46 = *(_QWORD *)(a1 + 24);
                *(_QWORD *)v47 = *v19;
                v28 = sub_15DCAD0(v27, (int)v47, 0);
                v44 = (unsigned int *)v28;
                if ( v28 )
                  ++*(_DWORD *)(v28 + 8);
                v29 = *(_QWORD *)(a1 + 16);
                v30 = *(_QWORD *)(v29 + 8656);
                if ( !v30
                  || (v31 = *v44, (unsigned int)v31 >= *(_DWORD *)(v30 - 4))
                  || (v19 = *(_QWORD **)(v30 + 8 * v31)) == nullptr )
                {
                  sub_B6F780(v29);
                  v19 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *v44);
                }
                v45 = v44[2];
                v44[2] = v45 - 1;
                if ( v45 == 1 )
                  sub_15D7BC0(v46, v44);
              }
            }
            v17 = sub_15F0200(a1 + 56);
            v18 = *(_DWORD **)(v20 + 24);
            if ( v18 )
            {
              if ( (v17 == *v18 || *v18 == *(_DWORD *)(a1 + 120)) && !v18[1] )
              {
                v40 = sub_B39350((__int64)v19, *(_DWORD *)(a1 + 8));
                if ( v40 == -1 || v19 != *(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * v40) )
                  break;
              }
            }
            v16 += 8;
            if ( v16 == v41 )
              goto LABEL_59;
          }
          v16 += 8;
          (**(void (__fastcall ***)(__int64, _QWORD *))a1)(a1, v19);
        }
        while ( v16 != v41 );
      }
LABEL_59:
      (**(void (__fastcall ***)(__int64, __int64))a1)(a1, v42);
    }
    else
    {
      v32 = *(_QWORD *)(v42 + 112);
      v33 = sub_B39350(v32, *(_DWORD *)(a1 + 8));
      if ( v33 == -1 || v32 != *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v33) )
        (**(void (__fastcall ***)(__int64, __int64))a1)(a1, v32);
    }
    if ( !*((_WORD *)a2 + 2) )
    {
      if ( (v34 = sub_15F0200(a1 + 56), !*((_WORD *)a2 + 2))
        && (v35 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL)) != nullptr
        && v34 == *v35
        && v35[1] == 1
        || (v38 = sub_15F0200(a1 + 56), !*((_WORD *)a2 + 2))
        && (v39 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL)) != nullptr
        && v38 == *v39
        && v39[1] == 2 )
      {
        v36 = sub_B39350(*(_QWORD *)(v42 + 112), *(_DWORD *)(a1 + 8));
        if ( !(unsigned int)sub_8E7030(*(_QWORD *)(a1 + 16)) )
          sub_B4A4F0(a1, v36, (double *)v42);
      }
    }
  }
  return 1;
}

