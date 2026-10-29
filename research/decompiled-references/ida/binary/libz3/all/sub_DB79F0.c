__int64 __fastcall sub_DB79F0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 *a6,
        double a7,
        __int64 *a8)
{
  char **exception; // rbx
  unsigned __int8 *v9; // rax
  unsigned int v10; // ebp
  unsigned int v12; // r13d
  __int64 v15; // r10
  __int64 v18; // r13
  __int64 v19; // rax
  int v20; // edx
  int v21; // r13d
  int v22; // esi
  __int64 v23; // r10
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  int v27; // ecx
  int v28; // esi
  char v29; // al
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rax
  int v33; // ecx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r10
  __int64 v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // r13
  bool v41; // zf
  void *v42; // rdi
  __int64 v43; // r9
  int v44; // r8d
  __int64 v45; // rax
  __int64 v46; // rsi
  void **v47; // rbx
  void **v48; // rbp
  _DWORD *v49; // rsi
  __int64 v50; // rdi
  _QWORD *v51; // rdx
  __int64 v52; // rax
  unsigned int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // r12
  __int64 v56; // rax
  __int64 v57; // rbp
  __int64 v58; // rax
  __int64 v59; // rsi
  __int64 v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rbx
  __int64 v63; // rsi
  __int64 v64; // rdi
  char *v65; // rbx
  char *v66; // rbp
  __int64 v67; // rsi
  __int64 v68; // rdi
  char v69; // r13
  int v70; // r8d
  int v71; // r9d
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // r13
  __int64 v75; // rsi
  __int64 v76; // r13
  const char *v77; // r14
  __int64 *v78; // rdi
  __int64 i; // r15
  __int64 v80; // r14
  __int64 v81; // rdi
  int v82; // edx
  int v83; // ecx
  int v84; // r8d
  int v85; // r9d
  __int64 v86; // rax
  void *v87; // r10
  int v88; // ecx
  int v89; // r8d
  int v90; // r9d
  __int64 v91; // rdx
  _QWORD *v92; // r11
  __int64 v93; // rax
  __int64 v94; // r13
  __int64 v95; // r12
  __int64 v96; // rsi
  __int64 v97; // rdi
  __int64 v98; // rsi
  __int64 v99; // rdi
  __int64 v100; // r13
  const char *v101; // r14
  __int64 *v102; // rdi
  __int64 j; // r15
  __int64 v104; // r14
  __int64 v105; // rax
  __int64 v106; // rbp
  __int64 v107; // rsi
  __int64 v108; // rdi
  unsigned int v109; // r8d
  unsigned int v110; // eax
  unsigned int *v111; // rax
  int v112; // ecx
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // r12
  __int64 v117; // rsi
  __int64 v118; // rdi
  _QWORD *v119; // rax
  int v120; // [rsp+0h] [rbp-168h]
  int v121; // [rsp+0h] [rbp-168h]
  char v122[8]; // [rsp+0h] [rbp-168h]
  char v123; // [rsp+0h] [rbp-168h]
  char v124; // [rsp+0h] [rbp-168h]
  char v125[8]; // [rsp+0h] [rbp-168h]
  int *v126; // [rsp+0h] [rbp-168h]
  char v127; // [rsp+0h] [rbp-168h]
  char v128[8]; // [rsp+0h] [rbp-168h]
  char v129; // [rsp+0h] [rbp-168h]
  char v130; // [rsp+0h] [rbp-168h]
  int *v131; // [rsp+8h] [rbp-160h]
  _QWORD *v132; // [rsp+8h] [rbp-160h]
  unsigned int v133; // [rsp+8h] [rbp-160h]
  void *v134; // [rsp+8h] [rbp-160h]
  void *v135; // [rsp+8h] [rbp-160h]
  void *v136; // [rsp+8h] [rbp-160h]
  void **v137; // [rsp+10h] [rbp-158h]
  int v139[2]; // [rsp+10h] [rbp-158h]
  __int64 v140; // [rsp+18h] [rbp-150h]
  __int64 v141; // [rsp+18h] [rbp-150h]
  char v142[8]; // [rsp+18h] [rbp-150h]
  int v143; // [rsp+20h] [rbp-148h]
  int v144[2]; // [rsp+20h] [rbp-148h]
  int v145[2]; // [rsp+20h] [rbp-148h]
  int v146[2]; // [rsp+20h] [rbp-148h]
  _QWORD *v147; // [rsp+28h] [rbp-140h]
  int v148; // [rsp+30h] [rbp-138h]
  int v149; // [rsp+38h] [rbp-130h] BYREF
  int v150[2]; // [rsp+40h] [rbp-128h] BYREF
  int v151[2]; // [rsp+48h] [rbp-120h]
  int v152[2]; // [rsp+50h] [rbp-118h] BYREF
  int v153[2]; // [rsp+58h] [rbp-110h]
  void *v154; // [rsp+60h] [rbp-108h] BYREF
  int v155; // [rsp+68h] [rbp-100h]
  __int64 v156; // [rsp+70h] [rbp-F8h] BYREF
  int v157; // [rsp+78h] [rbp-F0h]
  int v158; // [rsp+80h] [rbp-E8h]
  int v159; // [rsp+88h] [rbp-E0h]
  int v160[2]; // [rsp+90h] [rbp-D8h] BYREF
  void *v161; // [rsp+98h] [rbp-D0h]
  int v162[2]; // [rsp+A0h] [rbp-C8h]
  void *v163; // [rsp+A8h] [rbp-C0h] BYREF
  int v164; // [rsp+B0h] [rbp-B8h]
  __int64 v165; // [rsp+B8h] [rbp-B0h]

  v9 = (unsigned __int8 *)a1[1];
  v10 = *v9;
  if ( !(_BYTE)v10 || *(_WORD *)(a2 + 4) != 2 || *(_DWORD *)(a2 + 16) )
    return 0;
  v15 = a3;
  v120 = *(_DWORD *)(a2 + 44);
  if ( v9[16] )
  {
    v52 = *a1;
    v161 = nullptr;
    *(_QWORD *)v160 = v52;
    sub_DBD710(
      a1 + 37,
      "(declare-fun ?store (Int Int Int) Int)\n"
      "(declare-fun ?select (Int Int) Int)\n"
      "(declare-fun ?PO (Int Int) Int)\n"
      "(declare-fun ?asChild (Int Int) Int)\n"
      "(declare-fun ?classDown (Int Int) Int)\n"
      "(declare-fun ?array (Int) Int)\n"
      "(declare-fun ?elemtype (Int) Int)\n"
      "(declare-fun ?is (Int Int) Int)\n"
      "(declare-fun ?cast (Int Int) Int)\n"
      "(declare-fun ?Object () Int)\n"
      "(declare-fun ?null () Int)\n"
      "(declare-fun ?typeof (Int) Int)\n"
      "(declare-fun ?asElems (Int) Int)\n"
      "(declare-fun ?isAllocated (Int Int) Int) \n"
      "(declare-fun ?fClosedTime (Int) Int)\n"
      "(declare-fun ?eClosedTime (Int) Int)\n"
      "(declare-fun ?max (Int) Int)\n"
      "(declare-fun ?asLockSet (Int) Int)\n"
      "(declare-fun ?isNewArray (Int) Int)\n"
      "(declare-fun ?classLiteral (Int) Int)\n"
      "(declare-fun ?Class () Int)\n"
      "(declare-fun ?alloc () Int)\n"
      "(declare-fun ?arrayType () Int)\n"
      "(declare-fun ?f (Int) Int)\n"
      "(declare-fun ?finv (Int) Int)\n"
      "(declare-fun ?select2 (Int Int Int) Int) \n"
      "(declare-fun ?store2 (Int Int Int Int) Int)\n"
      "(declare-fun ?subtypes (Int Int) Bool)\n"
      "(declare-fun ?Unbox (Int) Int)\n"
      "(declare-fun ?UnboxedType (Int) Int)\n"
      "(declare-fun ?Box (Int Int) Int)\n"
      "(declare-fun ?System.Object () Int)\n"
      "(declare-fun ?Smt.true () Int)\n"
      "(declare-fun ?AsRepField (Int Int) Int)\n"
      "(declare-fun ?AsPeerField (Int) Int)\n"
      "(declare-fun ?nullObject () Int)\n"
      "(declare-fun ?ownerRef_ () Int)\n"
      "(declare-fun ?ownerFrame_ () Int)\n"
      "(declare-fun IntsHeap (Int) Int)\n"
      "(declare-fun ?localinv_ () Int)\n"
      "(declare-fun ?inv_ () Int)\n"
      "(declare-fun ?BaseClass_ (Int) Int)\n"
      "(declare-fun ?typeof_ (Int) Int)\n"
      "(declare-fun ?PeerGroupPlaceholder_ () Int)\n"
      "(declare-fun ?ClassRepr (Int) Int)\n"
      "(declare-fun ?RefArray (Int Int) Int)\n"
      "(declare-fun Ints_ (Int Int) Int)\n"
      "(declare-fun ?RefArrayGet (Int Int) Int)\n"
      "(declare-fun ?elements_ () Int)\n"
      "(declare-fun ?NonNullRefArray (Int Int) Int)\n"
      "(declare-fun IntsNotNull_ (Int Int) Int)\n"
      "(declare-fun ?Rank_ (Int) Int)\n"
      "(declare-fun ?ValueArray (Int Int) Int)\n"
      "(declare-fun ?ArrayCategory_ (Int) Int)\n"
      "(declare-fun ?ArrayCategoryValue_ () Int)\n"
      "(declare-fun ?ElementType_ (Int) Int)\n"
      "(declare-fun ?System.Array () Int)\n"
      "(declare-fun ?allocated_ () Int)\n"
      "(declare-fun ?StructGet_ (Int Int) Int)\n"
      "(declare-fun ?AsRangeField (Int Int) Int)\n"
      "(declare-fun IntsAllocated (Int Int) Int)\n"
      "(declare-fun IntnRange (Int Int) Bool)\n"
      "(declare-fun ?isAllocated_ (Int Int) Bool)\n"
      "(declare-fun ?AsDirectSubClass (Int Int) Int)\n"
      "(declare-fun ?OneClassDown (Int Int) Int)\n"
      "(assert (forall ((a Int) (i Int) (e Int))\n"
      "                (!\n"
      "                 (= (?select (?store a i e) i) e)\n"
      "                 :pattern (?store a i e)\n"
      "                 :weight 0)))\n"
      "(assert (forall ((a Int) (i Int) (j Int) (e Int))\n"
      "                (!\n"
      "                 (or (= i j) (= (?select (?store a i e) j) (?select a j)))\n"
      "                 :pattern (?select (?store a i e) j)\n"
      "                 :weight 0)))\n"
      "(assert (forall ((t0 Int) (t1 Int) (t2 Int))\n"
      "                (!\n"
      "                 (or (not (= (?PO t0 t1) 1))\n"
      "                     (not (= (?PO t1 t2) 1))\n"
      "                     (= (?PO t0 t2) 1))\n"
      "                 :pattern ((?PO t0 t1) (?PO t1 t2)))))\n"
      "(assert (forall ((t0 Int) (t1 Int))\n"
      "                (!\n"
      "                 (or (not (= (?PO t0 t1) 1))\n"
      "                     (not (= (?PO t1 t0) 1))\n"
      "                     (= t0 t1))\n"
      "                 :pattern ((?PO t0 t1) (?PO t1 t0)))))\n"
      "(assert (forall ((t0 Int) (t1 Int) (t2 Int))\n"
      "                 (!\n"
      "                  (or (not (= (?PO t0 (?asChild t1 t2)) 1))\n"
      "                      (= (?classDown t2 t0) (?asChild   t1 t2)))\n"
      "                  :pattern (?PO t0 (?asChild t1 t2)))))\n"
      "(assert (forall ((t Int))\n"
      "                (!\n"
      "                 (= (?finv (?f t)) t)\n"
      "                 :pattern (?f t))))\n"
      "(assert (forall ((t0 Int) (t1 Int) )\n"
      "                (!\n"
      "                 (iff (= (?PO t0 (?array t1)) 1)\n"
      "                      (not (or (not (= t0 (?array (?elemtype t0))))\n"
      "                               (not (= (?PO (?elemtype t0) t1) 1)))))\n"
      "                 :pattern (?PO t0 (?array t1)))))\n"
      "(assert (forall ((x Int) (t Int))\n"
      "                (!\n"
      "                 (or (not (= (?is x t) 1))\n"
      "                     (= (?cast x t) x))\n"
      "                 :pattern (?cast x t))))\n"
      "(assert (forall ((x Int) (t Int))\n"
      "                (!\n"
      "                 (or (not (= (?PO t ?Object) 1))\n"
      "                     (iff (= (?is x t) 1)\n"
      "                          (or (= x ?null)\n"
      "                              (= (?PO (?typeof x) t) 1))))\n"
      "                 :pattern ((?PO t ?Object) (?is x t)))))\n"
      "(assert (forall ((e Int) (a Int) (i Int))\n"
      "                (!\n"
      "                 (= (?is (?select (?select (?asElems e) a) i)\n"
      "                         (?elemtype (?typeof a))) 1)\n"
      "                 :pattern (?select (?select (?asElems e) a) i))))\n"
      "(assert (forall ((x Int) (f Int) (a0 Int))\n"
      "                (!\n"
      "                 (or (<= (+ a0 (* (- 1) (?fClosedTime f))) 0)\n"
      "                     (not (= (?isAllocated x a0) 1))\n"
      "                     (= (?isAllocated (?select f x) a0) 1))\n"
      "                 :pattern (?isAllocated (?select f x) a0))))\n"
      "(assert (forall ((a Int) (e Int) (i Int) (a0 Int))\n"
      "                (!\n"
      "                 (or (<= (+ a0 (* (- 1) (?eClosedTime e))) 0)\n"
      "                     (not (= (?isAllocated a a0) 1))\n"
      "                     (= (?isAllocated (?select (?select e a) i) a0) 1))\n"
      "                 :pattern (?isAllocated (?select (?select e a) i) a0))))\n"
      "(assert (forall ((S Int))\n"
      "                (!\n"
      "                 (= (?select (?asLockSet S) (?max (?asLockSet S))) 1)\n"
      "                 :pattern (?select (?asLockSet S) (?max (?asLockSet S))))))\n"
      "(assert (forall ((s Int))\n"
      "                (!\n"
      "                 (or (not (= 1 (?isNewArray s)))\n"
      "                     (= (?PO (?typeof s) ?arrayType) 1))\n"
      "                 :pattern (?isNewArray s))))\n"
      "(assert (forall ((t Int))\n"
      "                (!\n"
      "                 (not (or (= (?classLiteral t) ?null)\n"
      "                          (not (= (?is (?classLiteral t) ?Class) 1))\n"
      "                          (not (= (?isAllocated (?classLiteral t) ?alloc) 1))))\n"
      "                 :pattern (?classLiteral t))))\n"
      "(assert  (forall ((A Int) (o Int) (f Int) (v Int))\n"
      "                 (!\n"
      "                  (= (?select2 (?store2 A o f v) o f) v)\n"
      "                  :pattern (?store2 A o f v)\n"
      "                  :weight 0)))\n"
      "(assert  (forall ((A Int) (o Int) (f Int) (p Int) (g Int) (v Int))\n"
      "                 (!\n"
      "                  (or (= o p) (= (?select2 (?store2 A o f v) p g) (?select2 A p g)))\n"
      "                  :pattern (?select2 (?store2 A o f v) p g)\n"
      "                  :weight 0)))\n"
      "(assert  (forall ((A Int) (o Int) (f Int) (p Int) (g Int) (v Int))\n"
      "                 (!\n"
      "                  (or (= f g) (= (?select2 (?store2 A o f v) p g) (?select2 A p g)))\n"
      "                  :pattern (?select2 (?store2 A o f v) p g)\n"
      "                  :weight 0)))\n"
      "(assert  (forall ((t Int) (u Int) (v Int))\n"
      "                 (!\n"
      "                  (or (not (?subtypes t u))\n"
      "                      (not (?subtypes u v))\n"
      "                      (?subtypes t v))\n"
      "                  :pattern ((?subtypes t u) (?subtypes u v)))))\n"
      "(assert  (forall ((t Int) (u Int))\n"
      "                 (!\n"
      "                  (or (not (?subtypes t u))\n"
      "                      (not (?subtypes u t))\n"
      "                      (= t u))\n"
      "                  :pattern ((?subtypes t u) (?subtypes u t)))))\n"
      "(assert  (forall ((x Int) (p Int))\n"
      "                 (!\n"
      "                  (or (not (?subtypes (?UnboxedType (?Box x p)) ?System.Object))\n"
      "                      (not (= (?Box x p) p))\n"
      "                      (= x p))\n"
      "                  :pattern (?subtypes (?UnboxedType (?Box x p)) ?System.Object))))\n"
      "(assert  (forall ((h Int) (o Int) (f Int) (T Int))\n"
      "                 (!\n"
      "                  (or \n"
      "                   (not (= (IntsHeap h) ?Smt.true))\n"
      "                   (= (?select2 h o (?AsRepField f T)) ?nullObject)\n"
      "                   (not (or (not (= (?select2 h (?select2 h o (?AsRepField f T)) ?ownerRef_) o))\n"
      "                            (not (= (?select2 h (?select2 h o (?AsRepField f T)) ?ownerFrame_) T)))))\n"
      "                  :pattern (?select2 h o (?AsRepField f T)))))\n"
      "(assert  (forall ((h Int) (o Int) (f Int))\n"
      "                 (!\n"
      "                  (or\n"
      "                   (not (= (IntsHeap h) ?Smt.true))\n"
      "                   (= (?select2 h o (?AsPeerField f)) ?nullObject)\n"
      "                   (not (or (not (= (?select2 h (?select2 h o (?AsPeerField f)) ?ownerRef_) (?select2 h o ?ownerRe"
      "f_)))\n"
      "                            (not (= (?select2 h (?select2 h o (?AsPeerField f)) ?ownerFrame_) (?select2 h o ?owner"
      "Frame_))))))\n"
      "                  :pattern (?select2 h o (?AsPeerField f)))))\n"
      "(assert  (forall ((h Int) (o Int))\n"
      "                 (!\n"
      "                  (or \n"
      "                   (not (= (IntsHeap h) ?Smt.true))\n"
      "                   (= (?select2 h o ?ownerFrame_) ?PeerGroupPlaceholder_)\n"
      "                   (not (?subtypes (?select2 h (?select2 h o ?ownerRef_) ?inv_) (?select2 h o ?ownerFrame_)))\n"
      "                   (= (?select2 h (?select2 h o ?ownerRef_) ?localinv_) (?BaseClass_ (?select2 h o ?ownerFrame_)))"
      "\n"
      "                   (not (or (not (= (?select2 h o ?inv_) (?typeof_ o)))\n"
      "                            (not (= (?select2 h o ?localinv_) (?typeof_ o))))))\n"
      "                  :pattern (?subtypes (?select2 h (?select2 h o ?ownerRef_) ?inv_) (?select2 h o ?ownerFrame_)))))"
      "\n"
      "(assert  (forall ((T Int) (h Int))\n"
      "                 (!\n"
      "                  (or (not (= (IntsHeap h) ?Smt.true))\n"
      "                      (= (?select2 h (?ClassRepr T) ?ownerFrame_) ?PeerGroupPlaceholder_))\n"
      "                  :pattern (?select2 h (?ClassRepr T) ?ownerFrame_))))\n"
      "(assert  (forall ((a Int) (T Int) (i Int) (r Int) (heap Int))\n"
      "                 (!\n"
      "                  (or (not (= (IntsHeap heap) ?Smt.true))\n"
      "                      (not (?subtypes (?typeof_ a) (?RefArray T r)))\n"
      "                      (= (Ints_ (?RefArrayGet (?select2 heap a ?elements_) i) T) ?Smt.true))\n"
      "                  :pattern ((?subtypes (?typeof_ a) (?RefArray T r)) (?RefArrayGet (?select2 heap a ?elements_) i)"
      "))))\n"
      "(assert  (forall ((a Int) (T Int) (r Int))\n"
      "                 (!\n"
      "                  (or (= a ?nullObject) \n"
      "                      (not (?subtypes (?typeof_ a) (?RefArray T r)))\n"
      "                      (= (?Rank_ a) r))\n"
      "                  :pattern (?subtypes (?typeof_ a) (?RefArray T r)))))\n"
      "(assert  (forall ((T Int) (ET Int) (r Int))\n"
      "                 (!\n"
      "                  (or (not (?subtypes T (?ValueArray ET r)))\n"
      "                      (= (?ArrayCategory_ T) ?ArrayCategoryValue_))\n"
      "                  :pattern (?subtypes T (?ValueArray ET r)))))\n"
      "(assert  (forall ((A Int) (r Int) (T Int))\n"
      "                 (!\n"
      "                  (or\n"
      "                   (not (?subtypes T (?RefArray A r)))\n"
      "                   (not (or (not (= T (?RefArray (?ElementType_ T) r)))\n"
      "                            (not (?subtypes (?ElementType_ T) A)))))\n"
      "                  :pattern (?subtypes T (?RefArray A r)))))\n"
      "(assert  (forall ((A Int) (r Int) (T Int))\n"
      "                 (!\n"
      "                  (or (not (?subtypes T (?ValueArray A r)))\n"
      "                      (= T (?ValueArray A r)))\n"
      "                  :pattern (?subtypes T (?ValueArray A r)))))\n"
      "(assert  (forall ((A Int) (B Int) (C Int))\n"
      "                 (!\n"
      "                  (or (not (?subtypes C (?AsDirectSubClass B A)))\n"
      "                      (= (?OneClassDown C A) B))\n"
      "                  :pattern (?subtypes C (?AsDirectSubClass B A)))))\n"
      "(assert  (forall ((o Int) (T Int))\n"
      "                 (!\n"
      "                  (iff (= (Ints_ o T) ?Smt.true)\n"
      "                       (or (= o ?nullObject)\n"
      "                           (?subtypes (?typeof_ o) T)))\n"
      "                  :pattern (Ints_ o T))))\n"
      "(assert  (forall ((o Int) (T Int))\n"
      "                 (!\n"
      "                  (iff (= (IntsNotNull_ o T) ?Smt.true)\n"
      "                       (or (= o ?nullObject)\n"
      "                           (not (= (Ints_ o T) ?Smt.true))))\n"
      "                  :pattern (IntsNotNull_ o T))))\n"
      "(assert  (forall ((h Int) (o Int))\n"
      "                 (!\n"
      "                  (or (not (= (IntsHeap h) ?Smt.true))\n"
      "                      (= o ?nullObject)\n"
      "                      (not (?subtypes (?typeof_ o) ?System.Array))\n"
      "                      (not (or (not (= (?select2 h o ?inv_) (?typeof_ o)))\n"
      "                               (not (= (?select2 h o ?localinv_) (?typeof_ o))))))\n"
      "                  :pattern ((?subtypes (?typeof_ o) ?System.Array) (?select2 h o ?inv_)))))\n"
      "(assert  (forall ((h Int) (o Int) (f Int) (T Int))\n"
      "                 (!\n"
      "                  (or (not (= (IntsHeap h) ?Smt.true))\n"
      "                      (IntnRange (?select2 h o (?AsRangeField f T)) T))\n"
      "                  :pattern (?select2 h o (?AsRangeField f T)))))\n"
      "(assert  (forall ((h Int) (o Int) (f Int))\n"
      "                 (!\n"
      "                  (or\n"
      "                   (not (= (IntsHeap h) ?Smt.true))\n"
      "                   (not (= (?select2 h o ?allocated_) ?Smt.true))\n"
      "                   (= (IntsAllocated h (?select2 h o f)) ?Smt.true))\n"
      "                  :pattern (IntsAllocated h (?select2 h o f)))))\n"
      "(assert  (forall ((h Int) (s Int) (f Int))\n"
      "                 (!\n"
      "                  (or (not (= (IntsAllocated h s) ?Smt.true))\n"
      "                      (= (IntsAllocated h (?StructGet_ s f)) ?Smt.true))\n"
      "                  :pattern (IntsAllocated h (?StructGet_ s f)))))\n"
      "(assert  (forall ((x Int) (f Int) (a0 Int))\n"
      "                 (!\n"
      "                  (or (<= (+ a0 (* (- 1) (?fClosedTime f))) 0)\n"
      "                      (not (?isAllocated_ x a0))\n"
      "                      (?isAllocated_ (?select f x) a0))\n"
      "                  :pattern (?isAllocated_ (?select f x) a0))))\n"
      "(assert  (forall ((a Int) (e Int) (i Int) (a0 Int))\n"
      "                 (!\n"
      "                  (or (<= (+ a0 (* (- 1) (?eClosedTime e))) 0)\n"
      "                      (not (?isAllocated_ a a0))\n"
      "                      (?isAllocated_ (?select (?select e a) i) a0))\n"
      "                  :pattern (?isAllocated_ (?select (?select e a) i) a0))))\n"
      "(assert  (forall ((e Int) (a Int) (i Int))\n"
      "                 (!\n"
      "                  (= (?is (?select (?select (?asElems e) a) i)\n"
      "                          (?elemtype (?typeof a))) ?Smt.true)\n"
      "                  :pattern (?select (?select (?asElems e) a) i))))\n"
      "(assert  (forall ((t0 Int) (t1 Int))\n"
      "                 (!\n"
      "                  (iff (?subtypes t0 (?array t1))\n"
      "                       (not (or (not (= t0 (?array (?elemtype t0))))\n"
      "                                (not (?subtypes (?elemtype t0) t1)))))\n"
      "                    :pattern (?subtypes t0 (?array t1)))))\n"
      "(assert  (forall ((t0 Int) (t1 Int) (t2 Int))\n"
      "                 (!\n"
      "                  (or (not (?subtypes t0 (?asChild t1 t2)))\n"
      "                      (= (?classDown t2 t0) (?asChild   t1 t2)))\n"
      "                  :pattern (?subtypes t0 (?asChild t1 t2)))))\n"
      "(assert  (forall ((t0 Int) (t1 Int))\n"
      "                 (!\n"
      "                  (iff (?subtypes t0 (?array t1))\n"
      "                       (not (or (not (= t0 (?array (?elemtype t0))))\n"
      "                                (not (?subtypes (?elemtype t0) t1)))))\n"
      "                  :pattern (?subtypes t0 (?array t1)))))\n"
      "(assert  (forall ((x Int) (t Int))\n"
      "                 (!\n"
      "                  (or (not (= (?is x t) ?Smt.true))\n"
      "                      (= (?cast x t) x))\n"
      "                  :pattern (?cast x t))))\n"
      "(assert  (forall ((x Int) (t Int))\n"
      "                 (!\n"
      "                  (or (not (?subtypes t ?Object))\n"
      "                      (iff (= (?is x t) ?Smt.true)\n"
      "                           (or (= x ?null)\n"
      "                               (?subtypes (?typeof x) t))))\n"
      "                  :pattern ((?subtypes t ?Object) (?is x t)))))\n"
      "(assert  (forall ((e Int) (a Int) (i Int))\n"
      "                 (!\n"
      "                  (= (?is (?select (?select (?asElems e) a) i)\n"
      "                          (?elemtype (?typeof a))) 1)\n"
      "                  :pattern (?select (?select (?asElems e) a) i))))\n");
    v53 = sub_DBD110((int)a1 + 296);
    v15 = a3;
    v12 = v53;
    if ( (_BYTE)v53 )
    {
      v54 = *(unsigned int *)(a2 + 72);
      v55 = *a1;
      if ( (_DWORD)v54 )
      {
        v105 = sub_15DBBD0(*a1, a2, (unsigned int)v154);
        v106 = v105;
        if ( v105 )
          ++*(_DWORD *)(v105 + 8);
        v107 = *a6;
        if ( *a6 )
        {
          v108 = a6[1];
          v41 = (*(_DWORD *)(v107 + 8))-- == 1;
          if ( v41 )
            sub_15D7BC0(v108, v107);
        }
        *a6 = v106;
      }
      else
      {
        v56 = sub_15DB950(*a1, a2, v54, v161, *(_QWORD *)(a2 + 24));
        v57 = v56;
        if ( v56 )
          ++*(_DWORD *)(v56 + 8);
        v58 = sub_15DBBD0(*a1, v56, (unsigned int)v154);
        if ( v58 )
          ++*(_DWORD *)(v58 + 8);
        v59 = *a6;
        if ( *a6 )
        {
          v60 = a6[1];
          v41 = (*(_DWORD *)(v59 + 8))-- == 1;
          if ( v41 )
          {
            *(_QWORD *)v128 = v58;
            sub_15D7BC0(v60, v59);
            v58 = *(_QWORD *)v128;
          }
        }
        *a6 = v58;
        if ( v57 )
        {
          v41 = (*(_DWORD *)(v57 + 8))-- == 1;
          if ( v41 )
            sub_15D7BC0(v55, v57);
        }
      }
      if ( *(_DWORD *)(*a1 + 712LL) )
      {
        v61 = sub_15DE370(*a1);
        v62 = v61;
        if ( v61 )
          ++*(_DWORD *)(v61 + 8);
        v63 = *a8;
        if ( *a8 )
        {
          v64 = a8[1];
          v41 = (*(_DWORD *)(v63 + 8))-- == 1;
          if ( v41 )
            sub_15D7BC0(v64, v63);
        }
        *a8 = v62;
      }
      v65 = (char *)v161;
      if ( v161 )
      {
        v66 = (char *)v161 + 8 * *((unsigned int *)v161 - 1);
        if ( v161 >= v66 )
          goto LABEL_87;
        do
        {
          v67 = *(_QWORD *)v65;
          if ( *(_QWORD *)v65 )
          {
            v68 = *(_QWORD *)v160;
            v41 = (*(_DWORD *)(v67 + 8))-- == 1;
            if ( v41 )
              sub_15D7BC0(v68, v67);
          }
          v65 += 8;
        }
        while ( v65 < v66 );
        v65 = (char *)v161;
        if ( v161 )
LABEL_87:
          sub_186B220(v65 - 8);
      }
      return v12;
    }
  }
  v18 = *(unsigned int *)(a2 + 72);
  if ( (_DWORD)v18 )
    return 0;
  v19 = a1[1];
  v20 = v120;
  if ( *(int *)(v19 + 32) >= 0 )
    v20 = *(_DWORD *)(v19 + 32);
  v121 = v20;
  if ( *(_DWORD *)(v19 + 12) == 1 )
  {
    v51 = (_QWORD *)a1[3];
    if ( v51 )
    {
      v18 = *((unsigned int *)v51 - 1);
      if ( (_DWORD)v18 == *((_DWORD *)v51 - 2) )
      {
        v109 = (unsigned int)(3 * v18 + 1) >> 1;
        v110 = 4 * v109 + 8;
        if ( 4 * (int)v18 + 8 >= v110 || (unsigned int)v18 >= v109 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v160, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v160);
          sub_233E40((__int64)v160);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        *(_QWORD *)v139 = v15;
        v133 = (unsigned int)(3 * v18 + 1) >> 1;
        v111 = (unsigned int *)sub_186B300(v51 - 1, v110);
        v15 = *(_QWORD *)v139;
        v51 = v111 + 2;
        v18 = v111[1];
        a1[3] = v111 + 2;
        *v111 = v133;
      }
    }
    else
    {
      v136 = (void *)v15;
      v119 = (_QWORD *)sub_186B270(0x10u);
      v15 = (__int64)v136;
      *v119 = 2;
      v51 = v119 + 1;
      a1[3] = v119 + 1;
    }
    *((_DWORD *)v51 + v18) = *((_DWORD *)a1 + 5);
    ++*((_DWORD *)v51 - 1);
  }
  v21 = *(_DWORD *)(a2 + 76);
  v22 = *(_DWORD *)(a2 + 20);
  v140 = v15;
  *(_QWORD *)v160 = *a1;
  v137 = &v163;
  v161 = &v163;
  v131 = v160;
  *(_QWORD *)v162 = 0x1000000000LL;
  v143 = v21;
  sub_DB74E0((__int64)a1, v22, v15, v21, a5, (__int64)v160);
  v23 = v140;
  if ( v162[0] || !v21 )
    goto LABEL_13;
  sub_DB74E0((__int64)a1, *(_DWORD *)(a2 + 20), v140, 0, 0, (__int64)v160);
  v24 = a1[1];
  v23 = v140;
  if ( *(_BYTE *)(v24 + 37) && v162[0] )
  {
    sub_180CE20(
      (int)&v154,
      a2 + 56,
      v82,
      v83,
      v84,
      v85,
      v121,
      v160,
      (int)&v163,
      v140,
      v21,
      (int)v147,
      v148,
      v149,
      v150[0],
      v151[0],
      v152[0],
      v153[0],
      (int)v154,
      v155,
      v156,
      v157,
      v158,
      v159,
      v160[0],
      (int)v161,
      v162[0],
      v163,
      v164,
      v165);
    sub_1875640("ignoring nopats annotation because Z3 couldn't find any other pattern (quantifier id: %s)", v123);
    v23 = v140;
    if ( v154 != &v156 )
    {
      operator delete(v154, v156 + 1);
      v23 = v140;
    }
LABEL_13:
    v24 = a1[1];
  }
  v25 = *(_DWORD *)(v24 + 12);
  if ( v25 != 1 )
  {
    v26 = (unsigned int)v162[0];
    goto LABEL_16;
  }
  --*(_DWORD *)(a1[3] - 4LL);
  v26 = (unsigned int)v162[0];
  if ( v162[0] )
    goto LABEL_23;
  v69 = *((_BYTE *)a1 + 113);
  *((_BYTE *)a1 + 113) = 0;
  v140 = v23;
  LOBYTE(v147) = v69;
  sub_DB74E0((__int64)a1, *(_DWORD *)(a2 + 20), v23, v143, a5, (__int64)v131);
  v26 = (unsigned int)v162[0];
  v72 = a1[1];
  v23 = v140;
  if ( v162[0] )
  {
    v112 = *(_DWORD *)(v72 + 20);
    if ( v121 >= v112 )
      v112 = v121;
    v121 = v112;
    if ( !*(_BYTE *)(v72 + 37) )
    {
      *((_BYTE *)a1 + 113) = v69;
      goto LABEL_23;
    }
    sub_180CE20(
      (int)&v154,
      a2 + 56,
      v162[0],
      v112,
      v70,
      v71,
      v112,
      v131,
      (int)v137,
      v140,
      v143,
      (int)v147,
      v148,
      v149,
      v150[0],
      v151[0],
      v152[0],
      v153[0],
      (int)v154,
      v155,
      v156,
      v157,
      v158,
      v159,
      v160[0],
      (int)v161,
      v162[0],
      v163,
      v164,
      v165);
    sub_1875640(
      "using arith. in pattern (quantifier id: %s), the weight was increased to %d (this value can be modified using PI_A"
      "RITH_WEIGHT=<val>).",
      v130);
    v23 = v140;
    if ( v154 != &v156 )
    {
      operator delete(v154, v156 + 1);
      v23 = v140;
    }
    v113 = a1[1];
    v26 = (unsigned int)v162[0];
    *((_BYTE *)a1 + 113) = (_BYTE)v147;
    v25 = *(_DWORD *)(v113 + 12);
LABEL_16:
    if ( !v25 || (_DWORD)v26 )
      goto LABEL_23;
    goto LABEL_18;
  }
  v26 = *(unsigned int *)(v72 + 12);
  *((_BYTE *)a1 + 113) = v69;
  if ( !(_DWORD)v26 )
    goto LABEL_23;
LABEL_18:
  v27 = v143;
  v28 = *(_DWORD *)(a2 + 20);
  LOBYTE(v140) = *((_BYTE *)a1 + 112);
  v29 = *((_BYTE *)a1 + 113);
  *((_WORD *)a1 + 56) = 0;
  LOBYTE(v147) = v29;
  *(_QWORD *)v144 = v23;
  sub_DB74E0((__int64)a1, v28, v23, v27, a5, (__int64)v131);
  v26 = (unsigned int)v162[0];
  v23 = *(_QWORD *)v144;
  if ( v162[0] )
  {
    v32 = a1[1];
    v33 = *(_DWORD *)(v32 + 24);
    if ( v121 >= v33 )
      v33 = v121;
    v121 = v33;
    if ( *(_BYTE *)(v32 + 37) )
    {
      sub_180CE20(
        (int)&v154,
        a2 + 56,
        v162[0],
        v33,
        v30,
        v31,
        v33,
        v131,
        (int)v137,
        v140,
        v144[0],
        (int)v147,
        v148,
        v149,
        v150[0],
        v151[0],
        v152[0],
        v153[0],
        (int)v154,
        v155,
        v156,
        v157,
        v158,
        v159,
        v160[0],
        (int)v161,
        v162[0],
        v163,
        v164,
        v165);
      sub_1875640(
        "using non nested arith. pattern (quantifier id: %s), the weight was increased to %d (this value can be modified "
        "using PI_NON_NESTED_ARITH_WEIGHT=<val>).",
        v129);
      v23 = *(_QWORD *)v146;
      if ( v154 != &v156 )
      {
        operator delete(v154, v156 + 1);
        v23 = *(_QWORD *)v146;
      }
      v26 = (unsigned int)v162[0];
    }
  }
  *((_BYTE *)a1 + 113) = (_BYTE)v147;
  *((_BYTE *)a1 + 112) = v140;
LABEL_23:
  v141 = v23;
  *(_QWORD *)v145 = *a1;
  v34 = sub_15DB950(*a1, a2, v26, v161, v23);
  v36 = v141;
  v37 = v34;
  if ( v34 )
    ++*(_DWORD *)(v34 + 8);
  v38 = (unsigned int)v121;
  if ( *(_DWORD *)(a2 + 44) != v121 )
  {
    v39 = sub_15DBBD0(*a1, v34, (unsigned int)v121);
    v36 = v141;
    v40 = v39;
    if ( v39 )
      ++*(_DWORD *)(v39 + 8);
    if ( v37 )
    {
      v41 = (*(_DWORD *)(v37 + 8))-- == 1;
      if ( v41 )
      {
        sub_15D7BC0(*(_QWORD *)v145, v37);
        v36 = v141;
      }
    }
    v37 = v40;
  }
  v42 = (void *)*a1;
  v43 = *(unsigned int *)(*a1 + 712LL);
  if ( (_DWORD)v43 )
  {
    *(_QWORD *)v122 = v36;
    sub_15DE1B0((int)v42);
    sub_15DE700(*a1);
    v42 = (void *)*a1;
    v73 = sub_15DE750(*a1);
    v36 = *(_QWORD *)v122;
    v74 = v73;
    if ( v73 )
      ++*(_DWORD *)(v73 + 8);
    v75 = *a8;
    if ( *a8 )
    {
      v42 = (void *)a8[1];
      v41 = (*(_DWORD *)(v75 + 8))-- == 1;
      if ( v41 )
      {
        sub_15D7BC0(v42, v75);
        v36 = *(_QWORD *)v122;
      }
    }
    *a8 = v74;
  }
  v44 = v162[0];
  if ( v162[0] )
    goto LABEL_37;
  v45 = a1[1];
  if ( *(_BYTE *)(v45 + 28) )
  {
    v141 = v36;
    v126 = &v149;
    sub_13AC880(&v149, *a1, v38, v35, (unsigned int)v162[0], v43);
    v86 = *a1;
    *(_QWORD *)v150 = 0;
    *(_QWORD *)v151 = v86;
    *(_QWORD *)v152 = 0;
    *(_QWORD *)v153 = v86;
    sub_13AD310(&v149, v37, v150, v152);
    v87 = (void *)v141;
    if ( *(_QWORD *)v150 != v37 )
    {
      v147 = *(_QWORD **)v150;
      sub_DB74E0(
        (__int64)a1,
        *(_DWORD *)(*(_QWORD *)v150 + 20LL),
        *(_QWORD *)(*(_QWORD *)v150 + 24LL),
        0,
        0,
        (__int64)v131);
      v91 = (unsigned int)v162[0];
      v87 = (void *)v141;
      if ( v162[0] )
      {
        v92 = v147;
        if ( *(_BYTE *)(a1[1] + 37LL) )
        {
          sub_180CE20(
            (int)&v154,
            a2 + 56,
            v162[0],
            v88,
            v89,
            v90,
            (int)&v149,
            v147,
            (int)v137,
            v141,
            v145[0],
            (int)v147,
            v148,
            v149,
            v150[0],
            v151[0],
            v152[0],
            v153[0],
            (int)v154,
            v155,
            v156,
            v157,
            v158,
            v159,
            v160[0],
            (int)v161,
            v162[0],
            v163,
            v164,
            v165);
          sub_1875640("pulled nested quantifier to be able to find an usable pattern (quantifier id: %s)", v127);
          v92 = v132;
          v87 = *(void **)v142;
          if ( v154 != &v156 )
          {
            operator delete(v154, v156 + 1);
            v87 = *(void **)v142;
            v92 = v132;
          }
          v91 = (unsigned int)v162[0];
        }
        v141 = (__int64)v87;
        v93 = sub_15DB950(*a1, v92, v91, v161, v92[3]);
        v87 = (void *)v141;
        v94 = v93;
        if ( v93 )
          ++*(_DWORD *)(v93 + 8);
        if ( v37 )
        {
          v41 = (*(_DWORD *)(v37 + 8))-- == 1;
          if ( v41 )
          {
            sub_15D7BC0(*(_QWORD *)v145, v37);
            v87 = (void *)v141;
          }
        }
        v95 = *a1;
        if ( *(_DWORD *)(*a1 + 712LL) )
        {
          v141 = (__int64)v87;
          sub_15DE1B0(*a1);
          sub_15DE700(v95);
          v114 = sub_15DE750(v95);
          v115 = sub_15E2470(v95, *(_QWORD *)v152, v114);
          v87 = (void *)v141;
          v116 = v115;
          if ( v115 )
            ++*(_DWORD *)(v115 + 8);
          v117 = *a8;
          if ( *a8 )
          {
            v118 = a8[1];
            v41 = (*(_DWORD *)(v117 + 8))-- == 1;
            if ( v41 )
            {
              sub_15D7BC0(v118, v117);
              v87 = (void *)v141;
            }
          }
          *a8 = v116;
        }
        v37 = v94;
      }
    }
    v96 = *(_QWORD *)v152;
    if ( *(_QWORD *)v152 )
    {
      v97 = *(_QWORD *)v153;
      v41 = (*(_DWORD *)(*(_QWORD *)v152 + 8LL))-- == 1;
      if ( v41 )
      {
        v134 = v87;
        sub_15D7BC0(v97, v96);
        v87 = v134;
      }
    }
    v98 = *(_QWORD *)v150;
    if ( *(_QWORD *)v150 )
    {
      v99 = *(_QWORD *)v151;
      v41 = (*(_DWORD *)(*(_QWORD *)v150 + 8LL))-- == 1;
      if ( v41 )
      {
        v135 = v87;
        sub_15D7BC0(v99, v98);
        v87 = v135;
      }
    }
    v42 = v126;
    v131 = (int *)v87;
    sub_13AC9F0(v126);
    if ( v162[0] )
      goto LABEL_37;
    v45 = a1[1];
    v36 = (__int64)v131;
  }
  if ( *(_BYTE *)(v45 + 37) )
  {
    sub_180CE20(
      (int)&v154,
      a2 + 56,
      v38,
      v35,
      v44,
      v43,
      v36,
      v131,
      (int)v137,
      v141,
      v145[0],
      (int)v147,
      v148,
      v149,
      v150[0],
      v151[0],
      v152[0],
      v153[0],
      (int)v154,
      v155,
      v156,
      v157,
      v158,
      v159,
      v160[0],
      (int)v161,
      v162[0],
      v163,
      v164,
      v165);
    sub_1875640("failed to find a pattern for quantifier (quantifier id: %s)", v124);
    v42 = v154;
    v36 = *(_QWORD *)v125;
    if ( v154 != &v156 )
    {
      operator delete(v154, v156 + 1);
      v36 = *(_QWORD *)v125;
    }
    if ( v162[0] )
      goto LABEL_37;
  }
  if ( v36 != *(_QWORD *)(a2 + 24) )
  {
LABEL_37:
    if ( v37 )
      ++*(_DWORD *)(v37 + 8);
    v46 = *a6;
    if ( *a6 )
    {
      v42 = (void *)a6[1];
      v41 = (*(_DWORD *)(v46 + 8))-- == 1;
      if ( v41 )
        sub_15D7BC0(v42, v46);
    }
    *a6 = v37;
    if ( (unsigned int)sub_180B130(v42) > 9 )
    {
      if ( (unsigned __int8)sub_186A530(a7) )
      {
        sub_186A4C0(a7);
        v76 = sub_180B150(v42, v46);
        std::__ostream_insert<char,std::char_traits<char>>();
        v77 = *(const char **)(a2 + 56);
        if ( ((unsigned __int8)v77 & 7) != 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
        }
        else
        {
          if ( v77 )
            strlen(v77);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        v78 = (__int64 *)v76;
        std::__ostream_insert<char,std::char_traits<char>>();
        for ( i = 0; (unsigned int)i < v162[0]; ++i )
        {
          v80 = sub_180B150(v78, "\n");
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_1606360(&v154, *((_QWORD *)v161 + i), *a1, 2, 0, 0);
          sub_160E8B0(v80, &v154);
          std::__ostream_insert<char,std::char_traits<char>>();
          v78 = &v156;
          sub_18572D0(&v156);
        }
        v81 = sub_180B150(v78, "\n");
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v81, ")\n");
      }
      else
      {
        v100 = sub_180B150(v42, v46);
        std::__ostream_insert<char,std::char_traits<char>>();
        v101 = *(const char **)(a2 + 56);
        if ( ((unsigned __int8)v101 & 7) != 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
        }
        else
        {
          if ( v101 )
            strlen(v101);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        v102 = (__int64 *)v100;
        std::__ostream_insert<char,std::char_traits<char>>();
        for ( j = 0; (unsigned int)j < v162[0]; ++j )
        {
          v104 = sub_180B150(v102, "\n");
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_1606360(&v154, *((_QWORD *)v161 + j), *a1, 2, 0, 0);
          sub_160E8B0(v104, &v154);
          std::__ostream_insert<char,std::char_traits<char>>();
          v102 = &v156;
          sub_18572D0(&v156);
        }
        sub_180B150(v102, "\n");
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    v12 = v10;
    goto LABEL_44;
  }
  v12 = 0;
LABEL_44:
  if ( v37 )
  {
    v41 = (*(_DWORD *)(v37 + 8))-- == 1;
    if ( v41 )
      sub_15D7BC0(*(_QWORD *)v145, v37);
  }
  v47 = (void **)v161;
  v48 = (void **)((char *)v161 + 8 * (unsigned int)v162[0]);
  if ( v161 < v48 )
  {
    do
    {
      v49 = *v47;
      if ( *v47 )
      {
        v50 = *(_QWORD *)v160;
        v41 = v49[2]-- == 1;
        if ( v41 )
          sub_15D7BC0(v50, v49);
      }
      ++v47;
    }
    while ( v47 < v48 );
    v47 = (void **)v161;
  }
  if ( v47 != v137 && v47 )
    sub_186B220(v47);
  return v12;
}

