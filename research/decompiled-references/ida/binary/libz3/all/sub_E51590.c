__int64 __fastcall sub_E51590(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r12
  __int64 (__fastcall *v3)(); // rax
  _QWORD *v4; // r14
  __int64 (__fastcall *v5)(); // rdx
  _QWORD *v6; // r15
  __int64 (__fastcall *v7)(); // rax
  _QWORD *v8; // rcx
  __int64 (__fastcall *v9)(); // rdx
  _QWORD *v10; // rcx
  __int64 (__fastcall *v11)(); // rax
  _QWORD *v12; // rcx
  __int64 (__fastcall *v13)(); // rdx
  _QWORD *v14; // rcx
  __int64 (__fastcall *v15)(); // rax
  _QWORD **v16; // r13
  __int64 (__fastcall *v17)(); // rdx
  __int64 *v18; // rax
  __int64 *v19; // r13
  __int64 *v20; // rbp
  __int64 v21; // rdi
  __int64 *v22; // rax
  __int64 *v23; // r13
  __int64 *v24; // rbp
  __int64 v25; // rdi
  __int64 *v26; // rax
  __int64 *v27; // r13
  __int64 *v28; // rbp
  __int64 v29; // rdi
  __int64 *v30; // rax
  __int64 *v31; // r13
  __int64 *v32; // rbp
  __int64 v33; // rdi
  __int64 *v34; // rax
  __int64 *v35; // r13
  __int64 *v36; // rbp
  __int64 v37; // rdi
  __int64 *v38; // r13
  __int64 *v39; // r15
  __int64 v40; // rdi
  __int64 *v41; // r13
  __int64 *v42; // r14
  __int64 v43; // rdi
  __int64 *v44; // r12
  __int64 *v45; // r13
  __int64 v46; // rdi
  __int64 result; // rax
  __int64 *v48; // rbp
  __int64 *i; // r12
  __int64 v50; // rdi
  _QWORD *v52; // [rsp+10h] [rbp-58h]
  _QWORD *v53; // [rsp+18h] [rbp-50h]
  _QWORD *v54; // [rsp+20h] [rbp-48h]
  _QWORD *v55; // [rsp+28h] [rbp-40h]

  v2 = *(_QWORD **)(a1 + 104);
  v3 = *(__int64 (__fastcall **)())(*v2 + 16LL);
  if ( v3 == sub_E51590 )
  {
    v4 = (_QWORD *)v2[13];
    v5 = *(__int64 (__fastcall **)())(*v4 + 16LL);
    if ( v5 == v3 )
    {
      v6 = (_QWORD *)v4[13];
      v7 = *(__int64 (__fastcall **)())(*v6 + 16LL);
      if ( v7 == v5 )
      {
        v8 = (_QWORD *)v6[13];
        v52 = v8;
        v9 = *(__int64 (__fastcall **)())(*v8 + 16LL);
        if ( v9 == v7 )
        {
          v10 = (_QWORD *)v8[13];
          v53 = v10;
          v11 = *(__int64 (__fastcall **)())(*v10 + 16LL);
          if ( v11 == v9 )
          {
            v12 = (_QWORD *)v10[13];
            v54 = v12;
            v13 = *(__int64 (__fastcall **)())(*v12 + 16LL);
            if ( v13 == v11 )
            {
              v14 = (_QWORD *)v12[13];
              v55 = v14;
              v15 = *(__int64 (__fastcall **)())(*v14 + 16LL);
              if ( v15 == v13 )
              {
                v16 = (_QWORD **)v14[13];
                v17 = (__int64 (__fastcall *)())(*v16)[2];
                if ( v17 == v15 )
                {
                  (*(void (__fastcall **)(_QWORD *))(*v16[13] + 16LL))(v16[13]);
                  v18 = v16[54];
                  if ( v18 )
                  {
                    v19 = &v18[*((unsigned int *)v18 - 1)];
                    if ( v18 != v19 )
                    {
                      v20 = v18;
                      do
                      {
                        v21 = *v20++;
                        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 48LL))(v21, a2);
                      }
                      while ( v19 != v20 );
                    }
                  }
                }
                else
                {
                  ((void (__fastcall *)(_QWORD))v17)(v14[13]);
                }
                v22 = (__int64 *)v55[54];
                if ( v22 )
                {
                  v23 = &v22[*((unsigned int *)v22 - 1)];
                  if ( v22 != v23 )
                  {
                    v24 = (__int64 *)v55[54];
                    do
                    {
                      v25 = *v24++;
                      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 48LL))(v25, a2);
                    }
                    while ( v23 != v24 );
                  }
                }
              }
              else
              {
                ((void (__fastcall *)(_QWORD *))v15)(v14);
              }
              v26 = (__int64 *)v54[54];
              if ( v26 )
              {
                v27 = &v26[*((unsigned int *)v26 - 1)];
                if ( v26 != v27 )
                {
                  v28 = (__int64 *)v54[54];
                  do
                  {
                    v29 = *v28++;
                    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 48LL))(v29, a2);
                  }
                  while ( v27 != v28 );
                }
              }
            }
            else
            {
              ((void (__fastcall *)(_QWORD *))v13)(v12);
            }
            v30 = (__int64 *)v53[54];
            if ( v30 )
            {
              v31 = &v30[*((unsigned int *)v30 - 1)];
              if ( v30 != v31 )
              {
                v32 = (__int64 *)v53[54];
                do
                {
                  v33 = *v32++;
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 48LL))(v33, a2);
                }
                while ( v31 != v32 );
              }
            }
          }
          else
          {
            ((void (__fastcall *)(_QWORD *))v11)(v10);
          }
          v34 = (__int64 *)v52[54];
          if ( v34 )
          {
            v35 = &v34[*((unsigned int *)v34 - 1)];
            if ( v34 != v35 )
            {
              v36 = (__int64 *)v52[54];
              do
              {
                v37 = *v36++;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v37 + 48LL))(v37, a2);
              }
              while ( v35 != v36 );
            }
          }
        }
        else
        {
          ((void (__fastcall *)(_QWORD *))v9)(v8);
        }
        v38 = (__int64 *)v6[54];
        if ( v38 )
        {
          v39 = &v38[*((unsigned int *)v38 - 1)];
          while ( v39 != v38 )
          {
            v40 = *v38++;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 48LL))(v40, a2);
          }
        }
      }
      else
      {
        ((void (__fastcall *)(_QWORD))v7)(v4[13]);
      }
      v41 = (__int64 *)v4[54];
      if ( v41 )
      {
        v42 = &v41[*((unsigned int *)v41 - 1)];
        while ( v42 != v41 )
        {
          v43 = *v41++;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v43 + 48LL))(v43, a2);
        }
      }
    }
    else
    {
      ((void (__fastcall *)(_QWORD))v5)(v2[13]);
    }
    v44 = (__int64 *)v2[54];
    if ( v44 )
    {
      v45 = &v44[*((unsigned int *)v44 - 1)];
      while ( v45 != v44 )
      {
        v46 = *v44++;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v46 + 48LL))(v46, a2);
      }
    }
  }
  else
  {
    ((void (__fastcall *)(_QWORD *))v3)(v2);
  }
  result = a1;
  v48 = *(__int64 **)(a1 + 432);
  if ( v48 )
  {
    result = *((unsigned int *)v48 - 1);
    for ( i = &v48[result];
          i != v48;
          result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v50 + 48LL))(v50, a2) )
    {
      v50 = *v48++;
    }
  }
  return result;
}

