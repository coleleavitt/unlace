void __fastcall sub_85CFA0(__int64 a1, unsigned __int64 a2, double a3)
{
  __int64 v4; // rax
  __int16 v5; // dx
  __int64 v6; // rsi
  int v7; // edx
  _DWORD *v8; // rax
  char *v9; // rax
  unsigned int v10; // esi
  unsigned int v11; // edx
  __int64 **v12; // r12
  __int64 v13; // rax
  __int64 **v14; // r13
  __int64 *v15; // rsi
  char *v16; // rax
  unsigned int v17; // edx
  char *v18; // r12
  char *v19; // rax
  unsigned int v20; // esi
  unsigned int v21; // edx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // esi
  __int64 v25; // rcx
  __int64 v26; // rdx
  char *v27; // rax
  unsigned int v28; // esi
  unsigned int v29; // edx
  char *v30; // rax
  unsigned int v31; // esi
  unsigned int v32; // edx
  char *v33; // rax
  unsigned int v34; // edx

  v4 = *(_QWORD *)a2;
  v5 = *(_WORD *)(*(_QWORD *)a2 + 4LL);
  if ( v5 == 2 )
  {
    if ( *(_DWORD *)(v4 + 16) == 2 )
    {
      v9 = (char *)(a2 + 88);
      if ( *(int *)(a2 + 88) >> 8 == -1 )
      {
LABEL_15:
        v10 = -1;
      }
      else
      {
        while ( *(_DWORD *)(a1 + 12) != *v9 )
        {
          v9 = *((char **)v9 + 1);
          if ( !v9 )
            goto LABEL_15;
        }
        v10 = *(int *)v9 >> 8;
      }
      do
      {
        v11 = v10;
        v10 = *(_DWORD *)(*(_QWORD *)(a1 + 344) + 4LL * v10);
      }
      while ( v10 != v11 );
      goto LABEL_14;
    }
  }
  else if ( !v5 )
  {
    v6 = *(_QWORD *)(v4 + 16);
    v7 = *(_DWORD *)(a1 + 112);
    v8 = *(_DWORD **)(v6 + 24);
    if ( v8 )
    {
      if ( *v8 == v7 )
      {
        switch ( v8[1] )
        {
          case 0:
            v27 = (char *)(*(_QWORD *)(a2 + 176) + 88LL);
            if ( *(int *)v27 >> 8 == -1 )
              goto LABEL_66;
            do
            {
              if ( *(_DWORD *)(a1 + 12) == *v27 )
              {
                v28 = *(int *)v27 >> 8;
                goto LABEL_45;
              }
              v27 = *((char **)v27 + 1);
            }
            while ( v27 );
LABEL_66:
            v28 = -1;
            do
            {
LABEL_45:
              v29 = v28;
              v28 = *(_DWORD *)(*(_QWORD *)(a1 + 344) + 4LL * v28);
            }
            while ( v29 != v28 );
            sub_818EE0((_QWORD *)a1, v28, a2);
            return;
          case 1:
            v30 = (char *)(*(_QWORD *)(a2 + 176) + 88LL);
            if ( *(int *)v30 >> 8 == -1 )
              goto LABEL_64;
            do
            {
              if ( *(_DWORD *)(a1 + 12) == *v30 )
              {
                v31 = *(int *)v30 >> 8;
                goto LABEL_52;
              }
              v30 = *((char **)v30 + 1);
            }
            while ( v30 );
LABEL_64:
            v31 = -1;
            do
            {
LABEL_52:
              v32 = v31;
              v31 = *(_DWORD *)(*(_QWORD *)(a1 + 344) + 4LL * v31);
            }
            while ( v32 != v31 );
            sub_819140((_QWORD *)a1, v31, a2);
            return;
          case 2:
          case 0xD:
            v18 = (char *)(a2 + 88);
            if ( *(int *)(a2 + 88) >> 8 == -1 )
              goto LABEL_68;
            v19 = (char *)(a2 + 88);
            do
            {
              if ( *(_DWORD *)(a1 + 12) == *v19 )
              {
                v20 = *(int *)v19 >> 8;
                goto LABEL_31;
              }
              v19 = *((char **)v19 + 1);
            }
            while ( v19 );
LABEL_68:
            v20 = -1;
            do
            {
LABEL_31:
              v21 = v20;
              v20 = *(_DWORD *)(*(_QWORD *)(a1 + 344) + 4LL * v20);
            }
            while ( v21 != v20 );
            sub_818860((_QWORD *)a1, v20);
            if ( *(int *)(a2 + 88) >> 8 == -1 )
            {
LABEL_65:
              v24 = -1;
            }
            else
            {
              while ( *(_DWORD *)(a1 + 12) != *v18 )
              {
                v18 = *((char **)v18 + 1);
                if ( !v18 )
                  goto LABEL_65;
              }
              v24 = *(int *)v18 >> 8;
            }
            v25 = *(_QWORD *)(a1 + 344);
            do
            {
              v26 = v24;
              v24 = *(_DWORD *)(v25 + 4LL * v24);
            }
            while ( (_DWORD)v26 != v24 );
            sub_817EC0(a1, v24, v26, v25, v22, v23);
            return;
          case 3:
          case 0xA:
            return;
          case 4:
            v33 = (char *)(*(_QWORD *)(a2 + 176) + 88LL);
            if ( *(int *)v33 >> 8 == -1 )
              goto LABEL_63;
            do
            {
              if ( *(_DWORD *)(a1 + 12) == *v33 )
              {
                v10 = *(int *)v33 >> 8;
                goto LABEL_59;
              }
              v33 = *((char **)v33 + 1);
            }
            while ( v33 );
LABEL_63:
            v10 = -1;
            do
            {
LABEL_59:
              v34 = v10;
              v10 = *(_DWORD *)(*(_QWORD *)(a1 + 344) + 4LL * v10);
            }
            while ( v34 != v10 );
            goto LABEL_14;
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
            v12 = (__int64 **)(a2 + 176);
            v13 = 8LL * *(unsigned int *)(a2 + 152);
            v14 = (__int64 **)(a2 + 176 + v13);
            if ( v13 )
            {
              do
              {
                v15 = *v12++;
                sub_8189C0(a1, v15);
              }
              while ( v14 != v12 );
            }
            v16 = (char *)(a2 + 88);
            if ( *(int *)(a2 + 88) >> 8 == -1 )
              goto LABEL_67;
            break;
          case 0xB:
          case 0xC:
            sub_7CDC60(*(_QWORD **)(a1 + 80), v6, a3);
            return;
          default:
            goto LABEL_62;
        }
        do
        {
          if ( *(_DWORD *)(a1 + 12) == *v16 )
          {
            v10 = *(int *)v16 >> 8;
            goto LABEL_23;
          }
          v16 = *((char **)v16 + 1);
        }
        while ( v16 );
LABEL_67:
        v10 = -1;
        do
        {
LABEL_23:
          v17 = v10;
          v10 = *(_DWORD *)(*(_QWORD *)(a1 + 344) + 4LL * v10);
        }
        while ( v17 != v10 );
LABEL_14:
        sub_818860((_QWORD *)a1, v10);
      }
    }
    else if ( v7 == -1 )
    {
LABEL_62:
      sub_1872CE0("");
      sub_1873130(114, 192);
    }
  }
}

