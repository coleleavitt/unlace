_BOOL8 __fastcall sub_FAB40(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4, int a5)
{
  __int64 v9; // r10
  __int64 v10; // r11
  unsigned __int64 v11; // rcx
  _BOOL4 v12; // edx
  __int64 v13; // rax
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  int v17; // edx
  int v18; // r9d
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r9
  _QWORD *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 *v25; // rax

  v9 = *(_QWORD *)(a1 + 176);
  v10 = *(_QWORD *)(a1 + 200);
  v11 = 0x8F5C28F5C28F5C29LL
      * (((__int64)(*(_QWORD *)(a1 + 208) - *(_QWORD *)(a1 + 216)) >> 3) + ((*(_QWORD *)(a1 + 192) - v9) >> 3))
      + 2 * ((*(_QWORD *)(a1 + 232) == 0) + ((*(_QWORD *)(a1 + 232) - v10) >> 3) - 1);
  if ( v11 )
  {
    v15 = *(int *)(a1 + 240);
    v16 = *(_QWORD *)(a4 + 24);
    if ( !a5 )
      v16 = *(_QWORD *)(a4 + 16);
    v17 = v15 + v16;
    if ( v11 < v17 )
      v17 = -1030792151
          * (((__int64)(*(_QWORD *)(a1 + 208) - *(_QWORD *)(a1 + 216)) >> 3) + ((*(_QWORD *)(a1 + 192) - v9) >> 3))
          + 2 * ((*(_QWORD *)(a1 + 232) == 0) + (unsigned int)((*(_QWORD *)(a1 + 232) - v10) >> 3) - 1);
    if ( (v15 & 0x80000000) == 0LL )
    {
      v18 = v17 - 1;
      v12 = v17 > 0;
      LOBYTE(v12) = v15 < v11 && v12;
      if ( v12 )
      {
        v19 = v18;
        if ( v18 < v11 )
        {
          v20 = v15 - 0x70A3D70A3D70A3D7LL * ((v9 - *(_QWORD *)(a1 + 184)) >> 3);
          if ( v20 < 0 )
          {
            v21 = ~((unsigned __int64)~v20 >> 1);
          }
          else
          {
            v21 = v20 >> 1;
            if ( v20 <= 1 )
            {
              v22 = (_QWORD *)(v9 + 200 * v15);
LABEL_14:
              *a2 = *v22;
              v23 = v19 - 0x70A3D70A3D70A3D7LL * ((__int64)(*(_QWORD *)(a1 + 176) - *(_QWORD *)(a1 + 184)) >> 3);
              if ( v23 < 0 )
              {
                v24 = ~((unsigned __int64)~v23 >> 1);
              }
              else
              {
                v24 = v23 >> 1;
                if ( v23 <= 1 )
                {
                  v25 = (__int64 *)(*(_QWORD *)(a1 + 176) + 200 * v19);
                  goto LABEL_17;
                }
              }
              v25 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 200) + 8 * v24) + 200 * (v23 - 2 * v24));
LABEL_17:
              v13 = *v25;
              goto LABEL_3;
            }
          }
          v22 = (_QWORD *)(*(_QWORD *)(v10 + 8 * v21) + 200 * (v20 - 2 * v21));
          goto LABEL_14;
        }
      }
    }
  }
  *a2 = 0;
  v12 = 0;
  v13 = 0;
LABEL_3:
  *a3 = v13;
  return v12;
}

